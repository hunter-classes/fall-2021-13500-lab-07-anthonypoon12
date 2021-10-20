/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 7
 Task A: that takes one line of code as input and returns its copy without leading spaces and tabs
*/
#include <iostream>
#include <cctype>
#include <fstream>
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
std::string unindent(std::string filename)
{
	std::ifstream file(filename);
    std::string output = "";
    std::string dum;
    if (file.fail())
    {
        std::cerr<<"Can't be read!\n";
        exit(1);
    }
    while (getline(file,dum))
    {
        output+=removeLeadingSpaces(dum);
        output+="\n";
    }
	file.close();
    return output;
}
std::string indent(std::string filename)
{
	std::ifstream file(filename);
    int counter = 0;
    std::string output = "";
    std::string dum="";
    if (file.fail())
    {
        std::cerr<<"Can't be read!\n";
        exit(1);
    }
    while (getline(file,dum))
    {
        std::string dum1 = removeLeadingSpaces(dum);
        for (int i =0;i<counter;i++)
		dum1="\t"+dum1;
	if (countChar(dum1, '{')>0)
		counter++;
	if (countChar(dum1, '}')>0)
		counter--;
        output+=dum1 + "\n";
    }
file.close();
	return output;
}
