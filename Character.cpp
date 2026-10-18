#include "Character.h"

Character::Character(std::string name, int health, int shield)
    : name(name), health(health), shield(shield) {
    std::cout << "[LOG]: Character ctor (" << name << ")." << std::endl;
}

Character::~Character() {
    std::cout << "[LOG]: Character dtor (" << name << ")." << std::endl;
}

void Character::takeDamage(int amount) {
    std::cout << "\n-> " << name << " takes " << amount << " damage!" << std::endl;

    if (shield >= amount) {
        shield -= amount;
    }
    else {
        int remainingDamage = amount - shield;
        shield = 0;
        health -= remainingDamage;

        if (health < 0) {
            health = 0;
        }
    }

    showStatus();
}

void Character::showStatus() const {
    std::cout << "  [Status] Health: " << health << " | Shield: " << shield << std::endl;
}
