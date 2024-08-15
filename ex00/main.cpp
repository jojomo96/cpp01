
#include <string>
#include "Zombie.h"

void randomChump(std::string name);

Zombie *newZombie(std::string name);

int main() {
    auto *zombie = newZombie("John");
    zombie->announce();
    delete zombie;

    auto *zombie2 = new Zombie();
    zombie2->announce();
    delete zombie2;

    randomChump("Mary");
    return 0;
}
