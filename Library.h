
#pragma once
#include <vector>
#include "Book.h"
#include "IBookRepository.h"
#include "INotificationService.h"

class Library {
public:
    Library(IBookRepository& repo, INotificationService& notifier)
        : repo_(repo), notifier_(notifier) {
    }

    void addBook(const Book& book);
    void displayBooks() const;

private:
    IBookRepository& repo_;
    INotificationService& notifier_;
};