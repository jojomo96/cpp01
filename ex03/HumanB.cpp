
#include <iostream>
#include "HumanB.h"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() {
    if (weapon)
        std::cout << name << " attacks with his " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
