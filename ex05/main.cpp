#include <iostream>
#include "Harl.h"

int main() {
    Harl harl;

    std::cout << "\n" << "Testing debug level:" << std::endl;
    harl.complain("debug");

    std::cout << "\n" << "Testing info level:" << std::endl;
    harl.complain("info");

    std::cout << "\n" << "Testing warning level:" << std::endl;
    harl.complain("warning");

    std::cout << "\n" << "Testing error level:" << std::endl;
    harl.complain("error");

    std::cout << "\n" << "Testing unknown level:" << std::endl;
    harl.complain("unknown");

    return 0;
}