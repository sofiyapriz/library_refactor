#pragma once
#include <vector>
#include "Book.h"

// Абстракція сховища книг.
// Library залежатиме від ЦЬОГО, а не від конкретної БД (DIP).
class IBookRepository {
public:
    virtual ~IBookRepository() = default;
    virtual void save(const Book& book) = 0;
    virtual std::vector<Book> getAll() const = 0;
};