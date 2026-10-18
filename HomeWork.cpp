#include "iostream"
#include "Recon.h"
#include "Support.h"

int main() {
    Recon reconAgent("Rozvidnik");
    Support supportAgent("Medic");

    std::cout << "-----------------------------" << std::endl;

    reconAgent.takeDamage(30);
    reconAgent.takeDamage(40);

    std::cout << "-----------------------------" << std::endl;

    supportAgent.takeDamage(80);

    std::cout << "-----------------------------" << std::endl;

    reconAgent.scanArea();
    supportAgent.dropHeal();

    std::cout << "-----------------------------" << std::endl;
}