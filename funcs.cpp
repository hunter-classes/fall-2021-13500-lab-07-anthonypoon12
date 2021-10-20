/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 7
 Task A: that takes one line of code as input and returns its copy without leading spaces and tabs
*/
#include <iostream>
#include <cctype>
#include "funcs.h"
std::string removeLeadingSpaces(std::string line)
{
    bool start=false;
    std::string output="";
    if (line=="")
        return "";
    for (char c : line)
    {
        if (!isspace(c))
            start=true;
        if (start)
		output+=c;

    }
    return output;
}
int countChar(std::string line, char c)
{
	int output = 0;
	if (line=="")
		return 0;
	for (char d : line)
	{
		if (d == c)
			output ++;
	}
	return output;
}
