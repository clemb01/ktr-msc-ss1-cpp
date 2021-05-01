#include "Character.h"

#include "WeaponException.h"

#include <iostream>
#include <sstream>

namespace ktr_msc_ss1
{
	Character::Character(const char* name, const char* rpgClass)
		: _name(name), _rpgClass(rpgClass) {}

	void Character::Speak(const std::string& phrase)
	{
		std::cout << GenerateMessage(phrase) << std::endl;
	}

	const std::string Character::GenerateMessage(const std::string& message)
	{
		return _name + std::string(": ") + message;
	}

	void Character::Attack(const std::string& weapon)
	{
		Speak("Rrrrrrrrr ....");
	}

	void Character::TryToAttack(const std::string& weapon)
	{
		try
		{
			Attack(weapon);
		}
		catch (const WeaponException& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	void Character::Unsheathe()
	{
		Speak("Unsheathes his weapon.");
	}

	void Character::MoveLeft()
	{
		Speak("Moves left");
	}

	void Character::MoveRight()
	{
		Speak("Moves right");
	}

	void Character::MoveForward()
	{
		Speak("Moves forward");
	}

	void Character::MoveBack()
	{
		Speak("Moves back");
	}
}
