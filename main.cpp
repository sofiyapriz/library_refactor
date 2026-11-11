#include "Library.h"
#include "InMemoryBookRepository.h"
#include "ConsoleNotifier.h"
#include "EmailNotifier.h"

int main() {
    // Вибираємо конкретні реалізації — ТУТ, а не в Library
    InMemoryBookRepository repo;
    ConsoleNotifier notifier;
    // EmailNotifier notifier;  // ← спробуйте замінити — Library не зміниться

    Library library(repo, notifier);

    library.addBook(Book("The Catcher in the Rye", "J.D. Salinger"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));

    library.displayBooks();

    return 0;
}