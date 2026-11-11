#pragma once
#include "Book.h"


class INotificationService {
public:
    virtual ~INotificationService() = default;
    virtual void notify(const Book& book) = 0;
};