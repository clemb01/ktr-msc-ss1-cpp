#pragma once

#include "Character.h"

namespace ktr_msc_ss1
{
	class Mage : public Character
	{
	public:
		Mage(const char* name);

		void Attack(const std::string& weapon) override;

		void MoveLeft() override;
		void MoveRight() override;
		void MoveForward() override;
		void MoveBack() override;
	};
}