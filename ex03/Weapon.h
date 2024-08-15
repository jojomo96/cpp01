
#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H


#include <string>

class Weapon {
public:
    explicit Weapon(const std::string &type);

    ~Weapon();

    [[nodiscard]] const std::string &getType() const;

    void setType(const std::string &type);

private:
    std::string type;
};


#endif //CPP01_WEAPON_H
