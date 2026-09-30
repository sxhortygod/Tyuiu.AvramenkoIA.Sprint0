// Tyuiu.AvramenkoIA.Sprint0.CoursControl.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class ControlService : public ISprint0Task8V0
{
	virtual int Control(int a) override
	{
		int p1 = a / 100;
		int p2 = (a / 10) % 10;
		int p3 = a % 10;

		return p1 * p2 * p3;
	}
};

class ControlService2 : public ISprint0Task8V3
{
	virtual int Proizved(float x, float y, float z) override
	{
		return 5 + (2 * x - z) / (3 + y * y);
	}

};
