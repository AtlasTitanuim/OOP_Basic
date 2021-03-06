// KoffieMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "KoffieAutomaat.h"
#include "KoffieMuntje.h"
#include "EenEuro.h"
#include "HalveEuro.h"

float createCoin(Munten& munt) {
	return munt.insertCoin();
}

int main()
{
	KoffieAutomaat automaat = KoffieAutomaat();
	KoffieMuntje koffieMuntje = KoffieMuntje();
	EenEuro eenEuro = EenEuro();
	HalveEuro halveEuro = HalveEuro();
	
	automaat.coinInsert(createCoin(halveEuro));

	int choice;
	std::cout << "Make your choice: ";
	std::cin >> choice;
	automaat.buyDrink(choice);

	//-----------------------------------------------
	std::cout << std::endl;
	//-----------------------------------------------

	automaat.coinInsert(createCoin(eenEuro));

	std::cout << "Make your choice: ";
	std::cin >> choice;
	automaat.buyDrink(choice);

	//-----------------------------------------------
	std::cout << std::endl;
	//-----------------------------------------------

	automaat.coinInsert(createCoin(koffieMuntje));

	std::cout << "Make your choice: ";
	std::cin >> choice;
	automaat.buyDrink(choice);

	//-----------------------------------------------
	std::cout << std::endl;
	//-----------------------------------------------

	automaat.coinInsert(createCoin(eenEuro) * 2);

	std::cout << "Make your choice: ";
	std::cin >> choice;
	automaat.buyDrink(choice);
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
