#include <iostream>
#include "funcs.h"
std::string unindent()
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
	std::cout<<unindent();
	return 0;
}
