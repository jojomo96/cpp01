#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H


class Zombie {
public:
	Zombie();

	~Zombie();

	void announce();

	void setName(std::string name);

private:
	std::string name;
};

#endif //CPP01_ZOMBIE_H
