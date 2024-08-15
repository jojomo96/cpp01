#include <iostream>
#include <utility>
#include "Zombie.h"

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = (name);
}

Zombie::Zombie() = default;

Zombie::~Zombie() {
    std::cout << name << " is dead" << std::endl;
}
