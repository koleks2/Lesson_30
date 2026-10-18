#include "EmailNotification.h"

EmailNotification::EmailNotification(std::string message, std::string timestamp, std::string emailAddress)
    : Notification(message, timestamp), emailAddress(emailAddress) {
    std::cout << "[LOG]: EmailNotification ctor." << std::endl;
}

EmailNotification::~EmailNotification() {
    std::cout << "[LOG]: EmailNotification dtor." << std::endl;
}

void EmailNotification::send() const {
    std::cout << "\nSending email to " << emailAddress << ": " << message << " [Time: " << timestamp << "]" << std::endl << std::endl;
}
