
#ifndef CPP01_HARL_H
#define CPP01_HARL_H


#include <string>

class Harl {
public:
    Harl();

    ~Harl();

    void complain(std::string level);

private:
    void debug(void);

    void info(void);

    void warning(void);

    void error(void);
};


#endif //CPP01_HARL_H
