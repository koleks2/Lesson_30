#pragma once
#include <iostream>
class Notification {
protected:
	std::string message;
	std::string timestamp;
public:
	Notification(std::string message, std::string timestamp);
	virtual ~Notification();
};

