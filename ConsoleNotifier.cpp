// ConsoleNotifier.cpp
#include "ConsoleNotifier.h"
#include <iostream>

void ConsoleNotifier::notify(const Book& book) {
    std::cout << "Sending email notification about the new book: "
        << book.getTitle() << std::endl;
}