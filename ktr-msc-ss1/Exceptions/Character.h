#pragma once

#include <string>

#include "Movable.h"

namespace ktr_msc_ss1
{
	class Character : public Movable
	{
	public:
		Character(const char* name, const char* rpgClass);

		virtual void Attack(const std::string& weapon);
		void TryToAttack(const std::string& weapon);
		void Unsheathe();

		virtual void MoveLeft();
		virtual void MoveRight();
		virtual void MoveForward();
		virtual void MoveBack();

		std::string GetName() { return _name; }
		int GetLife() { return _life; }
		int GetAgility() { return _agility; }
		int GetStrength() { return _strength; }
		int GetWit() { return _wit; }
		std::string GetRPGClass() { return _rpgClass; }

	protected:
		void Speak(const std::string& phrase);
		const std::string GenerateMessage(const std::string& message);

	protected:
		const char* _name;
		int _life = 50;
		int _agility = 2;
		int _strength = 2;
		int _wit = 2;
		const char* _rpgClass;
	};
}