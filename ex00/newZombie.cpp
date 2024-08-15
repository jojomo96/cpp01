#include <string>
#include "Zombie.h"

Zombie *newZombie(std::string name) {
	auto zombie = std::make_unique<Zombie>();
	zombie->setName(name);
	return zombie.release();
}
