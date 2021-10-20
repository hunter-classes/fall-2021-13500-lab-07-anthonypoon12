/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 7
 Reads a file and indents it properly
*/
#include <iostream>
#include "funcs.h"
std::string indent()
{
	std::string input;
	std::string output = "";
	int counter = 0;
	while (getline(std::cin,input))
	{
		std::string dummy = removeLeadingSpaces(input)+"\n";
		for (int i =0;i<counter;i++)
			dummy="\t"+dummy;
		if (countChar(input, '{')>0)
			counter++;
		if (countChar(input, '}')>0)
			counter--;
		output += dummy;
	}
	return output;
}
int main()
{
		std::cout<<indent();
	return 0;
}

