#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

int sum(int a, int b) {
    return a + b;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE("Sum of 2 integers") {
    REQUIRE(sum(1,2) == 3);
    REQUIRE(sum(3,10) == 13);
}