// Tyuiu.AvramenkoIA.Sprint0.Task4.V3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service2 : public ISprint0Task4
{

	virtual int Calculate(int a, int b, int c) override
	{
		return (15 / 2 / 4) + 8;
	};

};