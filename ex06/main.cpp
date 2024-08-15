#include <iostream>
#include "Harl.h"

enum Level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

Level getLevel(const std::string &level) {
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return UNKNOWN;
}

int main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}

	std::string level = argv[1];

	if (level.empty()) {
		std::cerr << "Error: Argument is an empty string" << std::endl;
		return 1;
	}

	switch (getLevel(level)) {
		case DEBUG:
			harl.complain("debug");
			[[fallthrough]];
		case INFO:
			harl.complain("info");
			[[fallthrough]];
		case WARNING:
			harl.complain("warning");
			[[fallthrough]];
		case ERROR:
			harl.complain("error");
			break;
		default:
			std::cerr << "Error: Unknown level: " << level << std::endl;
			return 1;
	}

	return 0;
}
