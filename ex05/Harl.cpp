#include <iostream>
#include "Harl.h"

struct Level {
	std::string level;

	void (Harl::*func)(void);
};

Harl::Harl() = default;

Harl::~Harl() = default;

void Harl::complain(std::string level) {
	Level levels[] = {
		{"debug", &Harl::debug},
		{"info", &Harl::info},
		{"warning", &Harl::warning},
		{"error", &Harl::error}
	};

	for (auto &[l, func]: levels) {
		if (l == level) {
			(this->*func)();
			return;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}

void Harl::debug(void) {
	std::cout << "Debug" << std::endl;
}

void Harl::info(void) {
	std::cout << "Info" << std::endl;
}

void Harl::warning(void) {
	std::cout << "Warning" << std::endl;
}

void Harl::error(void) {
	std::cout << "Error" << std::endl;
}
