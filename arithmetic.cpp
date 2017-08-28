#include "arithmetic.h"

Arithmetic::Arithmetic()
{}

/**
 *  adds two numbers together
 */
int Arithmetic::add(int a, int b)
{
  return (a + b);
}

/**
 *  subtracts one number from another
 */
int Arithmetic::subtract(int a, int b)
{
  return (a - b);
}

/**
 *  takes the factorial of a number
 */
int Arithmetic::factorial(int a)
{
  return a > 1 ? factorial(a - 1) * a : 1;
}

/**
 *  raises a number to a power
 */
int Arithmetic::raiseToPower(int base, int power)
{
  int result = 1;
  for(int i = 1; i < power; i++) // initalize i to 0 to solve new tests
  {
    result *= base;
  }
  return result;
}
