#include "Notification.h"

Notification::Notification(std::string message, std::string timestamp)
    : message(message), timestamp(timestamp) {
    std::cout << "[LOG]: Notification ctor." << std::endl;
}

Notification::~Notification() {
    std::cout << "[LOG]: Notification dtor." << std::endl;
}
