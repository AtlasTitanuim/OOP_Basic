// ReadAndWriteFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <vector>


int main()
{
	std::ifstream in("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/ReadFile.txt");
	std::ofstream out("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/WriteFile.txt");

	if (!in) {
		std::cout << "Probleem bij openen ReadFile" << std::endl;
		exit(1);
	}
	if (!out) {
		std::cout << "Probleem bij openen WriteFile" << std::endl;
		exit(1);
	}

	if (in.is_open())
	{
		std::vector<std::string> lines_in_order;
		std::string line;
		while (std::getline(in, line))
		{
			lines_in_order.push_back(line);
		}

		std::reverse(std::begin(lines_in_order), std::end(lines_in_order));
		for (auto e : lines_in_order) out << e;
		std::cout << '\n';

		int a[] = { 4, 5, 6, 7 };
		std::reverse(std::begin(a), std::end(a));
		for (auto e : a) std::cout << e;
	}

	in.close();
	out.close();

	std::ifstream iner("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/ReadFile.txt");
	std::ifstream in2("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/WriteFile.txt");
	std::ofstream doubouble("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/DoubleFile.txt");
	std::string str;
	
	while (!in2.eof())
	{
		std::string line; 
		std::getline(iner, line);
		std::cout << line << std::endl;
		for (unsigned i = 0; i < str.length(); ++i)
		{
			doubouble.put(str.at(i));
		}
	
		std::string line2; 
		std::getline(in2, line2);

		std::cout << line2 << std::endl;
		for (unsigned i = 0; i < str.length(); ++i)
		{
			doubouble.put(str.at(i));
		}

	}

	iner.close();
	in2.close();
	doubouble.close();
}













/*
int main()
{
	std::ifstream in_stream;
	std::ofstream out_stream;

	in_stream.open("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/ReadFile.txt");
	out_stream.open("C:/Users/Atlas/Desktop/HKU School/Year2/GitHubFiles/OOP_Basic/WriteFile.txt");

	
	//char ch;
	//int characters = 0;
	//std::string line;

	while (!in_stream.eof()) {
	
		char ch;
		int pos;
		in_stream.seekg(-1, std::ios::end);
		pos = in_stream.tellg();
		for (int i = 0; i < pos; i++)
		{
			in_stream.get(ch);
			std::cout << ch;
			in_stream.seekg(-2, std::ios::cur);
		}

		//in_stream.get(ch);
		//std::cout << ch;
		//characters++;

		//in_stream.get(ch);
		//out_stream.put(ch);
	}

	//std::cout << characters << std::endl;
	
	in_stream.close();
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
*/