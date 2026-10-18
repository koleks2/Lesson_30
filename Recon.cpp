#include "Recon.h"

Recon::Recon(std::string name) : Character(name, 100, 50) {
    std::cout << "[LOG]: Recon ctor." << std::endl;
}

Recon::~Recon() {
    std::cout << "[LOG]: Recon dtor." << std::endl;
}

void Recon::scanArea() const {
    std::cout << name << " scans the area: 100 enemies detected! X_X" << std::endl;
}
