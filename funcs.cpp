/*
 Task A: that takes one line of code as input and returns its copy without leading spaces and tabs
*/
#include <iostream>
#include <cctype>

std::string removeLeadingSpaces(std::string line)
{
    bool start=false;
    std::string output="";
    if (line=="")
        return "";
    for (char c : line)
    {
        if (start)
            output+=c;
        else if (isspace(c))
            start=true;
    }
    return output;
}