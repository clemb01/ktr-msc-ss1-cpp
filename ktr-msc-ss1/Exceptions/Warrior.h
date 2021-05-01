#pragma once

#include "Character.h"

namespace ktr_msc_ss1
{
	class Warrior : public Character
	{
	public:
		Warrior(const char* name);

		void Attack(const std::string& weapon) override;

		void MoveLeft() override;
		void MoveRight() override;
		void MoveForward() override;
		void MoveBack() override;
	};
}