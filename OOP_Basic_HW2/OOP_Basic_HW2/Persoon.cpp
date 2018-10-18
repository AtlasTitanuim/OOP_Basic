#include "pch.h"
#include "Persoon.h"

Persoon::Persoon(int age, std::string name)
{
	naam = name;
	leeftijd = age;
}

int Persoon::getAge() {
	return leeftijd;
}

std::string Persoon::getName() {
	return naam;
}

int Persoon::getID() {
	return 0;
}
