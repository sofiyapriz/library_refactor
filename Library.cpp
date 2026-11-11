
#include "Library.h"

void Library::addBook(const Book& book) {
    repo_.save(book);
    notifier_.notify(book);
}

void Library::displayBooks() const {
    for (const auto& book : repo_.getAll()) {
        book.display();
    }
}