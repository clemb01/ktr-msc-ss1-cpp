#include <iostream>
#include "Exceptions/Warrior.h"
#include "Exceptions/Mage.h"

int main()
{
    ktrmscss1::Warrior warrior("Patrick");
    ktrmscss1::Mage mage("Pierre");

    std::cout << "Press a key to exit..." << std::endl;
    std::cin;
}