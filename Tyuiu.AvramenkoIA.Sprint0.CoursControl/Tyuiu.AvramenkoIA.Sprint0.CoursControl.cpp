// Tyuiu.AvramenkoIA.Sprint0.CoursControl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.AvramenkoIA.Sprint0.CoursControl.Lib/Tyuiu.AvramenkoIA.Sprint0.CoursControl.Lib.cpp"

int main()
{
	setlocale(LC_ALL, "RU");
	ISprint0Task8V0* SolveServiceV0 = new ControlService();

	int a;

	std::cout << "Введите трёхзначное число: ";
	std::cin >> a;

	std::cout << "Произведение цифр заданного трехзначного числа = " << SolveServiceV0->Control(a) << '\n';
  
	
	ISprint0Task8V3* SolveServiceV3 = new ControlService2();

	float x, y, z;

	std::cout << "Введите значение для переменных x, y, z через пробел: ";
	std::cin >> x >> y >> z;

	std::cout << "Результат выражения = " << SolveServiceV3->Proizved(x, y, z) << '\n';

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
