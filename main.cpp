#include <iostream>
#include <fstream>
#include "funcs.h"
int main()
{
    std::string file ("bad-code.cpp");
	std::string file2 ("bad-code-2.cpp");
    std::cout<<unindent(file,"unindentedbadcode.cpp")<<"\n";
    std::cout<<indent(file,"indentedbadcode.cpp")<<"\n";
	std::cout<<unindent(file2, "unindentedbadcode2.cpp")<<"\n";
	std::cout<<indent(file2, "indentedbadcode2.cpp")<<"\n";
	return 0;
}
