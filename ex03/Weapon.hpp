#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <cctype>
#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();

    std::string getType();
    void setType(std::string newType);
};

#endif
