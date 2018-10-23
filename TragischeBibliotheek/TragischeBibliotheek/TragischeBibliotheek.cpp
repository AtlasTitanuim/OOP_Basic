// TragischeBibliotheek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Boek.h"
#include "Bibliotheek.h"
#include <iostream>

void geefBoekDoor(Bibliotheek* bieb) {
	std::cout << "Biebliotheek gekregen " << std::endl;
	bieb->toon();

	bieb->voegToe("Ready Player One");
	bieb->toon();
}

int main() {
	std::cout << "---Bieb 1" << std::endl;
	Bibliotheek* bieb1 = new Bibliotheek();
	bieb1->voegToe("Ready Player One");
	std::cout << "---Bieb 1" << std::endl;
	bieb1->toon();

	bieb1->leenUit();
	std::cout << "---Bieb 1" << std::endl;
	bieb1->toon();

	bieb1->voegToe("Tales of the Borderlands");
	std::cout << "---Bieb 1" << std::endl;
	bieb1->toon();

	bieb1->brengTerug();
	std::cout << "---Bieb 1" << std::endl;
	bieb1->toon();

	bieb1->destroyBook();

	bieb1->voegToe("Tales of the Borderlands");
	std::cout << "---Bieb 1" << std::endl;
	bieb1->toon();

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
