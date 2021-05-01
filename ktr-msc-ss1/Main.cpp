#include "Exceptions/Character.h"
#include "Exceptions/Mage.h"
#include "Exceptions/Warrior.h"
#include "Exceptions/WeaponException.h"

#include <iostream>

int main(int argc, char** argv)
{
    ktr_msc_ss1::Character* warrior = new ktr_msc_ss1::Warrior("Jean-Luc");
    ktr_msc_ss1::Character* mage = new ktr_msc_ss1::Mage("Robert");

    warrior->TryToAttack("screwdriver");
    mage->TryToAttack("hammer");
    warrior->TryToAttack("hammer");

	try
	{
		mage->Attack("");
	}
	catch (const ktr_msc_ss1::WeaponException& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	delete warrior;
	delete mage;
}