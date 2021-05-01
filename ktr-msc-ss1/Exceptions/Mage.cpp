#include "Mage.h"

#include "WeaponException.h"

namespace ktr_msc_ss1
{
	Mage::Mage(const char* name)
		: Character(name, "Mage")
	{
		_life = 70;
		_strength = 3;
		_agility = 10;
		_wit = 10;

		Speak("May the gods be with me.");
	}

	void Mage::Attack(const std::string& weapon)
	{
		if (weapon == "")
		{
			throw WeaponException(GenerateMessage("I refuse to fight with my bare hands."));
		}

		if (weapon == "magic" || weapon == "wand")
		{
			Character::Attack(weapon);

			Speak("Feel the power of my " + weapon + "!");
		}
		else
		{
			throw WeaponException(GenerateMessage("I don 't need this stupid " + weapon + "! Don 't misjudge my powers !"));
		}
	}

	void Mage::MoveLeft()
	{
		Speak("Moves left furtively.");
	}

	void Mage::MoveRight()
	{
		Speak("Moves right furtively.");
	}

	void Mage::MoveForward()
	{
		Speak("Moves forward furtively.");
	}

	void Mage::MoveBack()
	{
		Speak("Moves back furtively.");
	}
}