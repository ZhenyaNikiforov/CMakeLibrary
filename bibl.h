#pragma once
#include <iostream>

#ifdef MY_DLL_EXPORTS
#define DllExport __declspec(dllexport)
#else
#define DllExport __declspec(dllimport)
#endif

class DllExport Leaver {
public:
	std::string leave(std::string line);
};