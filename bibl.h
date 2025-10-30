#pragma once
#include <iostream>

#ifdef CMAKELIBRARY_EXPORTS
#define CMAKELIBRARY_API __declspec(dllexport)
#else
#define CMAKELIBRARY_API __declspec(dllimport)
#endif

class CMAKELIBRARY_API Leaver {
public:
	std::string leave(std::string line);
};