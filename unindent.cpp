#include <iostream>
#include "funcs.h"
int main()
{
	std::string input;
	while (getline(std::cin,input))
	{
		std::cout<<removeLeadingSpaces(input)<<"\n";
	}
	return 0;
}
