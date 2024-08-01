
#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H


#include "Weapon.h"

class HumanB {
public:
    HumanB(const std::string &name);

    ~HumanB();

    void setWeapon(Weapon &weapon);

    void attack();

private:
    std::string name;
    Weapon *weapon;
};


#endif //CPP01_HUMANB_H
