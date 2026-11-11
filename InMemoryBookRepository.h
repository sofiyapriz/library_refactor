// InMemoryBookRepository.h
#pragma once
#include "IBookRepository.h"

class InMemoryBookRepository : public IBookRepository {
public:
    void save(const Book& book) override;
    std::vector<Book> getAll() const override;

private:
    std::vector<Book> books_;
};