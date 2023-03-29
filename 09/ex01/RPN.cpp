#include "RPN.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

RPN::RPN(void)
{
  std::cout << "RPN constructor called" << std::endl;
}

RPN::RPN(const RPN& origin)
{
  std::cout << "RPN copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor ---------------------------
 */

RPN::~RPN(void)
{
  std::cout << "RPN destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

RPN& RPN::operator=(const RPN& origin)
{
  if (this != &origin)
  {
  }
  return *this;
}

/*
 * -------------------------- Getter -------------------------------
 */

/*
 * -------------------------- Setter -------------------------------
 */

/*
 * ------------------------ Overriding -----------------------------
 */

/*
 * ----------------------- Member Function -------------------------
 */

/*
 * ---------------------- Non-Member Function ----------------------
 */
