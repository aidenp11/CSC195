// Week 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Week 1 Hello World!\n";

    int iVal1 = -1;
    short shVal1 = 3;
    long lVal1 = 123456789;
    int iVal2 = 20;
    float fVal1 = 15;
    char cVal1 = 'm';

    std::cout << "\n iVal1 = ";
    std::cout << iVal1 << " address = " << &iVal1;
    std::cout << "\n iVal2 = " << iVal2 << " address = " << &iVal2;
    std::cout << "\n shVal1 = " << shVal1 << " address = " << &shVal1;

    std::cout << "\n **** Size of char = " << sizeof(cVal1);
    std::cout << "\n **** Size of short = " << sizeof(shVal1);
    std::cout << "\n **** Size of int = " << sizeof(iVal1);

    int* iPtr = NULL;
    iPtr = &iVal1;

    std::cout << "\n value of iPtr variable = " << iPtr;
    std::cout << "\n iPtr address = " << &iPtr;
    std::cout << "\n size of iPtr = " << sizeof(iPtr);
    std::cout << "\n value iPtr points to is " << *iPtr;

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
