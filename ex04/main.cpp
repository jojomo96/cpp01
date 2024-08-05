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

    if (filename.empty() || s1.empty() || s2.empty()) {
        std::cerr << "Error: One or more arguments are empty strings" << std::endl;
        return 1;
    }

    std::string output = filename + ".replace";

    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file" << std::endl;
        return 1;
    }

    std::ofstream replace(output.c_str());
    if (!replace.is_open()) {
        std::cerr << "Error: Could not create output file" << std::endl;
        file.close();
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
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

    // Close the files
    file.close();
    replace.close();

    return 0;
}
