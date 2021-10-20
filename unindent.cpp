#include <iostream>
#include "funcs.h"
int unindent()
{
	std::string input;
	std::string output = "";
	while (getline(std::cin,input))
	{
		output+=removeLeadingSpaces(input)+"\n";
	}
	return output;
}
int main()
{
	std::cout<<output;
	return 0;
}
