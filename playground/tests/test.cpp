#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "../src/hello.cpp"


TEST_CASE("Hello Tests") {

    SECTION("Even Int Test") {
        REQUIRE(isThisEven(0) == true);
        REQUIRE(isThisEven(1) == false);
        REQUIRE(isThisEven(10) == true);
        REQUIRE(isThisEven(101) == false);
    }

    SECTION("PrintValue is called") {
        // Capture the output of printValue
        std::ostringstream output;
        std::streambuf* oldCoutBuf = std::cout.rdbuf(output.rdbuf());

        anotherFunction();

        std::cout.rdbuf(oldCoutBuf);  // Restore original buffer
        REQUIRE(output.str() == "This is another function.\n");
    }
}


// TEST_CASE("testIsEven") {
//     printValue(42);
//     SECTION("testIsEven: Ints") {
//         REQUIRE(testIsEven(0) == true);
//         REQUIRE(testIsEven(1) == false);
//         REQUIRE(testIsEven(2) == true);
//         REQUIRE(testIsEven(3) == false);
//         REQUIRE(testIsEven(4) == true);
//         REQUIRE(testIsEven(5) == false);
//     }
// }


