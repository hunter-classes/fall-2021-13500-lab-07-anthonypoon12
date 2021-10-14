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
