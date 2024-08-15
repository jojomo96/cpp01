#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// s2 can be empty on purpose
	if (filename.empty() || s1.empty()) {
		std::cerr << "Error: One or more arguments are empty strings" << std::endl;
		return 1;
	}

	std::string output = filename + ".replace";

	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Error: Could not open file" << std::endl;
		return 1;
	}

	std::ofstream replace(output);
	if (!replace.is_open()) {
		std::cerr << "Error: Could not create output file" << std::endl;
		file.close();
		return 1;
	}

	bool string_found = false;
	std::string line;

	while (std::getline(file, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			string_found = true;
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		replace << line << std::endl;
	}

	if (file.bad()) {
		std::cerr << "Error: An error occurred while reading the file" << std::endl;
		return 1;
	}

	if (replace.bad()) {
		std::cerr << "Error: An error occurred while writing to the output file" << std::endl;
		return 1;
	}

	if (!string_found) {
		std::cerr << "Warning: String not found" << std::endl;
		return 1;
	}

	return 0;
}
