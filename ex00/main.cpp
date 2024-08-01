
#include <string>
#include "Zombie.h"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main(){
    Zombie *zombie;

    zombie = newZombie("John");
    zombie->announce();
    delete zombie;

    randomChump("Mary");
    return 0;
}