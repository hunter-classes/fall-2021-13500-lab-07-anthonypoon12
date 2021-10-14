#include <iostream>
#include "funcs.h"
int main()
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
	std::cout<<output;
	return 0;
}

