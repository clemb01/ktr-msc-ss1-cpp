#pragma once

#include <exception>
#include <string>

namespace ktr_msc_ss1
{
	class WeaponException : public std::exception
	{
	public:
		WeaponException(const char* msg) : std::exception(msg) {};
		WeaponException(const std::string& msg) : std::exception(msg.c_str()) {};
	};
}