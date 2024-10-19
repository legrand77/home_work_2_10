#pragma once
#include <string>
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//namespace DynamicGoodbye
//{
	class Leaver
	{
	public:
		LIBRARY_API void leave(std::string a);
	};
//}