#include <gtest/gtest.h>
#include "Library.h"
#include "InMemoryBookRepository.h"
#include "INotificationService.h"

// Мок-сповіщувач: запам'ятовує, скільки разів його викликали.
// Це можливо ЛИШЕ тому, що Library залежить від ІНТЕРФЕЙСУ (DIP).
class MockNotifier : public INotificationService {
public:
    void notify(const Book&) override { ++callCount; }
    int callCount = 0;
};

TEST(LibraryTest, AddBookSavesAndNotifies) {
    InMemoryBookRepository repo;
    MockNotifier notifier;
    Library lib(repo, notifier);

    lib.addBook(Book("1984", "George Orwell"));

    EXPECT_EQ(repo.getAll().size(), 1u);
    EXPECT_EQ(notifier.callCount, 1);
}

TEST(LibraryTest, DisplayBooksDoesNotCrashOnEmpty) {
    InMemoryBookRepository repo;
    MockNotifier notifier;
    Library lib(repo, notifier);

    testing::internal::CaptureStdout();
    lib.displayBooks();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(out.empty());
}

TEST(BookTest, GettersReturnCorrectValues) {
    Book b("Dune", "Frank Herbert");
    EXPECT_EQ(b.getTitle(), "Dune");
    EXPECT_EQ(b.getAuthor(), "Frank Herbert");
}