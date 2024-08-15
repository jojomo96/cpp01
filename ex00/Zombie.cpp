#include <iostream>
#include "Zombie.h"

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = (name);
}

Zombie::Zombie() : name("Unnamed Zombie") {
}

Zombie::~Zombie() {
	std::cout << name << " is dead" << std::endl;
}
