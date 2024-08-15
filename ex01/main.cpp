#include <iostream>
#include <string>
#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name);

int main() {
	std::unique_ptr<Zombie[]> zombie(zombieHorde(5, "John"));
	if (!zombie) {
		std::cerr << "Error: Could not create zombie horde" << std::endl;
		return 1;
	}
	for (int i = 0; i < 5; ++i) {
		zombie[i].announce();
	}
	// No need to explicitly delete the array, unique_ptr will handle it
	return 0;
}
