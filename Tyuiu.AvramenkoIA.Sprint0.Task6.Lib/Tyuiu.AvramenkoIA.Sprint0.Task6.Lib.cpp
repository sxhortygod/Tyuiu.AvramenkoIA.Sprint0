// Tyuiu.AvramenkoIA.Sprint0.Task6.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service4:public ISprint0Task6
{
public:
	virtual int Zuul(int x, int y) override
	{
		return 5 + (x * y / 3);
	}

};
