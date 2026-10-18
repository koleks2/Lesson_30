#pragma once
#include "Notification.h"
class PushNotification : public Notification{
private:
    std::string deviceId;
public:
	PushNotification(std::string message, std::string timestamp, std::string deviceId);
	virtual ~PushNotification();
	void send() const;
};

