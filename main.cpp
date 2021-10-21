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
    std::cout<<unindent(file)<<"\n";
//	std::cout<<"hello";
    std::cout<<indent(file)<<"\n";
}
