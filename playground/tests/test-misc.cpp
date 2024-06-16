#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <array>

TEST_CASE("TEST: std::array has convenience methods") {
    std::array<int, 4> fib{ 0, 1, 2, 0 };

    SECTION("front") {
        fib.front() = 1; 
        REQUIRE(fib.front() == 1); 
        REQUIRE(fib.front() == fib[0]); 
    }

    SECTION("back") {
        fib.back() = 3; 
        REQUIRE(fib.back() == 3); 
        REQUIRE(fib.back() == fib[3]); 
    }

    // SECTION("array") {
    //     std::array<int, 0> e{};
    //     REQUIRE(e.begin() == e.end() );
    // }
}

TEST_CASE("TEST: std::array begin/end form a half-open range") {
    std::array<int, 2> e{1,2};
    // std::array
    REQUIRE(e.begin() == e.end());
}



