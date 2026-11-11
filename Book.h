#pragma once
#include <string>
#include <iostream>


class Book {
public:
    Book(std::string title, std::string author)
        : title_(std::move(title)), author_(std::move(author)) {
    }

    const std::string& getTitle()  const { return title_; }
    const std::string& getAuthor() const { return author_; }

    void display() const {
        std::cout << "Title: " << title_
            << ", Author: " << author_ << std::endl;
    }

private:
    std::string title_;   // інкапсуляція: private
    std::string author_;
};