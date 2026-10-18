#pragma once
#include "Character.h"

class Support : public Character {
public:
    Support(std::string name);
    ~Support();

    void dropHeal();
};
