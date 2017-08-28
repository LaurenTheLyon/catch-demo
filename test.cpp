#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "arithmetic.h"

TEST_CASE("Arithmetic class", "[arithmetic]")
{
  Arithmetic arith;

  SECTION("Addition")
  {
    REQUIRE(arith.add(2, 2) == 4);
    REQUIRE(arith.add(0, 0) == 0);
    REQUIRE(arith.add(4, -5) == -1);
  }

  SECTION("Subtraction")
  {
    REQUIRE(arith.subtract(10, 5) == 5);
    REQUIRE(arith.subtract(-6, 7) == -13);
    REQUIRE(arith.subtract(23, 0) == 23);
  }

  SECTION("Factorial")
  {
    REQUIRE(arith.factorial(0) == 1);
    REQUIRE(arith.factorial(1) == 1);
    REQUIRE(arith.factorial(2) == 2);
    REQUIRE(arith.factorial(3) == 6);
  }

  SECTION("Raise To Power")
  {
    //1^0 == 1
    REQUIRE(arith.raiseToPower(1, 0) == 1);
    //2^2 == 4
    // REQUIRE(arith.raiseToPower(2, 2) == 4);
    //4^3 == 64
    // REQUIRE(arith.raiseToPower(4, 3) == 64);
    //2^1 == 2
    // REQUIRE(arith.raiseToPower(2, 1) == 2);
  }
}
