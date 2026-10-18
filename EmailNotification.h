#pragma once
#include "Notification.h"
class EmailNotification : public Notification{
private:
	std::string emailAddress;
public:
	EmailNotification(std::string message, std::string timestamp, std::string emailAddress);
	virtual ~EmailNotification();
	void send() const;
};

