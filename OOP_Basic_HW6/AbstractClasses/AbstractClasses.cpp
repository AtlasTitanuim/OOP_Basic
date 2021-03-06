// AbstractClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include "Intercity.h"
#include "ICE.h"
#include "Bus.h"
#include "Taxi.h"
#include <iostream>

int main() {
	Intercity intercity = Intercity();
	ICE ice = ICE();
	Bus bus = Bus();
	Taxi taxi = Taxi();

	std::cout << "An Intercity train gets as income for 5 kilometers : " << std::endl << intercity.calculateIncome(5) << " Euro's" << std::endl << std::endl;
	std::cout << "An ICE train gets as income for 5 kilometers : " << std::endl << ice.calculateIncome(5) << " Euro's" << std::endl << std::endl;
	std::cout << "A Bus gets as income for 5 kilometers : " << std::endl << bus.calculateIncome(5) << " Euro's" << std::endl << std::endl;
	std::cout << "A Taxi gets as income for 5 kilometers : " << std::endl << taxi.calculateIncome(5) << " Euro's" << std::endl << std::endl;

	return 0;
}