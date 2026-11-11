// ConsoleNotifier.h
#pragma once
#include "INotificationService.h"

class ConsoleNotifier : public INotificationService {
public:
    void notify(const Book& book) override;
};