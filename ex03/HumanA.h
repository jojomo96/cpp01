#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H

#include "Weapon.h"

class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);

	~HumanA();

	void attack();

private:
	std::string name;
	Weapon &weapon;
};


#endif //CPP01_HUMANA_H
