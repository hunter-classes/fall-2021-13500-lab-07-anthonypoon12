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
