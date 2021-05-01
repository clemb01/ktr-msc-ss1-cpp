#pragma once

namespace ktr_msc_ss1
{
	class Movable
	{
	public:
		virtual void MoveLeft() = 0;
		virtual void MoveRight() = 0;
		virtual void MoveForward() = 0;
		virtual void MoveBack() = 0;
	};
}