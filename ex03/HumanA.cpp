#include <iostream>
#include <utility>
#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : name(std::move(name)), weapon(weapon) {
}

HumanA::~HumanA() = default;

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
