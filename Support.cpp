#include "Support.h"

Support::Support(std::string name) : Character(name, 100, 50) {
    std::cout << "[LOG]: Support ctor." << std::endl;
}

Support::~Support() {
    std::cout << "[LOG]: Support dtor." << std::endl;
}

void Support::dropHeal() {
    health += 30;
    if (health > 100) {
        health = 100;
    }
    std::cout << name << " drops a medkit! Allies are healed." << std::endl;
    showStatus();
}