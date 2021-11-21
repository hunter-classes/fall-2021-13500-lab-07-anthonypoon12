#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"


TEST_CASE("removeLeadingSpaces")
{
    CHECK(removeLeadingSpaces("")=="");
    CHECK(removeLeadingSpaces("         hello")=="hello");
    CHECK(removeLeadingSpaces("         hello2   ")=="hello2   ");
    CHECK(removeLeadingSpaces(" hello3		")=="hello3		");
}


TEST_CASE("countChar")
{
	CHECK(countChar("",'a')==0);
	CHECK(countChar("a",'a')==1);
	CHECK(countChar("hello",'l')==2);
}
