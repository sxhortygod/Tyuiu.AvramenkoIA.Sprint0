// Tyuiu.AvramenkoIA.Sprint0.Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.AvramenkoIA.Sprint0.Task6.Lib/Tyuiu.AvramenkoIA.Sprint0.Task6.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "RU");
    ISprint0Task6* service = new Service4();
    
    int x, y;

    std::cout << "¬ведите значение переменной x: ";
    std::cin >> x;

    std::cout << "¬ведите значение переменной y: ";
    std::cin >> y;

    std::cout << "–езультат выражени€ = " << service->Zuul(x, y) << std::endl;

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
