/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 7
Main file to run Lab 7
*/
#include <iostream>
#include <fstream>
#include "funcs.h"
int main()
{
    std::string file ("bad-code.cpp");
	std::string file2 ("bad-code-2.cpp");
	std::string file3 ("badcodefuncs.cpp");
    std::cout<<unindent(file,"unindentedbadcode.cpp")<<"\n";
    std::cout<<indent(file,"indentedbadcode.cpp")<<"\n";
	std::cout<<unindent(file2, "unindentedbadcode2.cpp")<<"\n";
	std::cout<<indent(file2, "indentedbadcode2.cpp")<<"\n";
	std::cout<<unindent(file3, "unindentedbadcodefuncs.cpp")<<"\n";
	std::cout<<indent(file3, "indentedbadcodefuncs.cpp")<<"\n";
	return 0;
}
