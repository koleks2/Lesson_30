#pragma once
#include "Character.h"

class Recon : public Character {
public:
    Recon(std::string name);
    ~Recon();

    void scanArea() const;
};
