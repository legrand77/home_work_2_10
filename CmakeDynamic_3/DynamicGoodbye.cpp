#include "Dynamicgoodbye.h"
#include <iostream>

namespace DynamicGoodbye
{
	void Leaver::leave(std::string a)
	{
		std::cout << "До свидания: " << a << "!" << std::endl;
	}
}