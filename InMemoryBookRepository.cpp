// InMemoryBookRepository.cpp
#include "InMemoryBookRepository.h"
#include <iostream>

void InMemoryBookRepository::save(const Book& book) {
    books_.push_back(book);
    std::cout << "Saving book to database..." << std::endl;
}

std::vector<Book> InMemoryBookRepository::getAll() const {
    return books_;
}