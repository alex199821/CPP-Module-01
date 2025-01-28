#ifndef HUMANB_HPP
#define HUMANB_HPP


# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
  private:
    std::string name;
    Weapon *weapon;

  public:
    HumanB(std::string newName);
    ~HumanB();

    void attack();
    void setWeapon(Weapon &newWeapon);
};

#endif