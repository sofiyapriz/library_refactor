
#pragma once
#include "INotificationService.h"

class EmailNotifier : public INotificationService {
public:
    void notify(const Book& book) override;
};