#include "Warrior.h"

#include "WeaponException.h"

namespace ktr_msc_ss1
{
	Warrior::Warrior(const char* name)
		: Character(name, "Warrior")
	{
		_life = 100;
		_strength = 10;
		_agility = 8;
		_wit = 3;

		Speak("My name will go down in history !");
	}

	void Warrior::Attack(const std::string& weapon)
	{
		if (weapon == "")
		{
			throw WeaponException(GenerateMessage("I refuse to fight with my bare hands."));
		}

		if (weapon == "magic" || weapon == "wand")
		{
			Character::Attack(weapon);
			Speak("I'll crush you with my " + weapon + "!");
		}
		else
		{
			throw WeaponException(GenerateMessage("A " + weapon + "?? What should I do with this?!"));
		}
	}

	void Warrior::MoveLeft()
	{
		Speak("Moves left like a bad boy.");
	}

	void Warrior::MoveRight()
	{
		Speak("Moves right like a bad boy.");
	}

	void Warrior::MoveForward()
	{
		Speak("Moves forward like a bad boy.");
	}

	void Warrior::MoveBack()
	{
		Speak("Moves back like a bad boy.");
	}
}