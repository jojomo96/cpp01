#include <string>
#include "Zombie.h"

Zombie *newZombie(std::string name) {
    auto *zombie = new Zombie();
    zombie->setName(name);
    return zombie;
}
