#include <string>
#include "Zombie.h"

void randomChump(std::string name);

Zombie *newZombie(std::string name);

int main() { {
		const std::unique_ptr<Zombie> zombie(newZombie("John"));
		zombie->announce();
	} // `zombie` is automatically deleted here

	{
		const std::unique_ptr<Zombie> zombie2(new Zombie());
		zombie2->announce();
	} // `zombie2` is automatically deleted here

	randomChump("Mary");
	return 0;
}
