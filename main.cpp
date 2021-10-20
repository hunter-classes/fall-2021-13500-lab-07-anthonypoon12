#include <iostream>
#include <iostream>
#include "funcs.h"
int main()
{
    ifstream file("bad-code.cpp");
    std::cout<<unindent(file)<<"\n";
    std::cout<<indent(file)<<"\n";
}