#include "PushNotification.h"

PushNotification::PushNotification(std::string message, std::string timestamp, std::string deviceId)
	: Notification(message, timestamp), deviceId(deviceId) {
	std::cout << "[LOG]: PushNotification ctor." << std::endl;
}

PushNotification::~PushNotification(){
	std::cout << "[LOG]: PushNotification dtor." << std::endl;
}

void PushNotification::send() const {
	std::cout << "\nSending push to device " << deviceId << ": " << message << " [Time: " << timestamp << "]" << std::endl << std::endl;
}




