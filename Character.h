#pragma once
#include <iostream>
class Character {
protected:
    std::string name;
    int health;
    int shield;
public:
    Character(std::string name, int health = 100, int shield = 50);
    virtual ~Character();

    void takeDamage(int amount);
    void showStatus() const;
};

