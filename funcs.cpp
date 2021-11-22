/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 7
 removeLeadingSpaces,countChar, unindent, and indent
*/


#include <iostream>
#include <cctype>
#include <fstream>
#include "funcs.h"


std::string removeLeadingSpaces(std::string line)
{
    std::string output = "";
    if (line == "")
        return "";

    for (int i = 0; i < line.length(); i++)
    {
        if (!isspace(line[i])){
            output += line.substr(i);
            break;
            
        }
    }
    return output;
}



// Changed since you don't need to declare a variable to return: only need to conditionalize.
int countChar(std::string line, char c)
{
    if (line == ""){
        return 0;
    }
    for (char d : line){
        if (d == c){
            return 1;
        }
    }
    return -1;
    /*
    int output = 0;
    if (line == "")
        return 0;

    for (char d : line)
    {
        if (d == c)
            output++;
    }

    return output;
*/
}


std::string unindent(std::string filename, std::string outfilename)
{
    // Here, you can refactor the sequences for opening a file into a function, instead of calling
    // it in both unindent() and indent().
    std::ifstream file(filename);
    std::string output = "";
    std::string dum;
    

    if (file.fail())
    {
        std::cerr << "Can't be read!\n";
        exit(1);
    }

    while (getline(file, dum))
    {
        output += removeLeadingSpaces(dum);
        output += "\n";
    }
    file.close();

    std::ofstream outfile(outfilename);
    outfile << output;
    outfile.close();

    return output;
}


// helper's name should be changed since at a readability level, it's difficult to understand
// what it does at first glance.
std::string helper(std::string input)
{
    std::string output = "";
    for (int i = 1; i < input.size(); i++)
        output += input[i];
    return output;
}


std::string indent(std::string filename, std::string outfilename)
{
    // Refactor, read unindent comment.
    std::ifstream file(filename);
    int counter = 0;
    std::string output = "";

    // the variables dum and dum1 should also be renamed in terms of readability.
    std::string dum = "";

    if (file.fail())
    {
        std::cerr << "Can't be read!\n";
        exit(1);
    }

    while (getline(file, dum))
    {
        std::string dum1 = removeLeadingSpaces(dum);
        for (int i = 0; i < counter; i++)
            dum1 = "\t" + dum1;

        if (countChar(dum1, '{') > 0)
            counter++;

        if (countChar(dum1, '}') > 0)
        {
            dum1 = helper(dum1);
            counter--;
        }
        output += dum1 + "\n";
    }
    file.close();

    std::ofstream outfile(outfilename);
    outfile << output;
    outfile.close();

    return output;
}
