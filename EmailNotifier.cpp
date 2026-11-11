
#include "EmailNotifier.h"
#include <iostream>

void EmailNotifier::notify(const Book& book) {
    std::cout << "[EMAIL] New book added: " << book.getTitle()
        << " by " << book.getAuthor() << std::endl;
}