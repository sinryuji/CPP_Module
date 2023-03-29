#include "RPN.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

RPN::RPN(void) {}

RPN::RPN(const RPN& origin) : s(origin.s) {}

/*
 * -------------------------- Destructor ---------------------------
 */

RPN::~RPN(void) {}

/*
 * -------------------------- Operator -----------------------------
 */

RPN& RPN::operator=(const RPN& origin) {
  if (this != &origin)
    this->s = origin.s;
  return *this;
}

/*
 * ----------------------- Member Function -------------------------
 */

const char* RPN::InvalidInputException::what() const throw() {
  return "Error: invalid input value";
}

const char* RPN::InvalidExpressionException::what() const throw() {
  return "Error: invalid polish mathematical expression";
}

void RPN::calc(std::string input) {
  for (size_t i = 0; i < input.length(); i++) {
    if (!validateInput(input[i]))
      throw RPN::InvalidInputException();
    if (std::isdigit(input[i]))
      this->s.push(input[i] - '0');
    if (isOperator(input[i])) {
      if (this->s.size() < 2)
        throw RPN::InvalidExpressionException();
      this->s.push(calcOp(ft_pop(this->s), ft_pop(this->s), input[i]));
    }
  }
  if (this->s.size() != 1)
    throw RPN::InvalidExpressionException();
  std::cout << ft_pop(this->s) << std::endl;
}

bool RPN::validateInput(char c) {
  if (!(isOperator(c) || std::isdigit(c) || std::isspace(c)))
    return false;
  return true;
}

bool RPN::isOperator(char c) {
  if (!(c == '+' || c == '-' || c == '*' || c == '/'))
    return false;
  return true;
}

int RPN::calcOp(int a, int b, char op) {
  if (op == '+')
    return b + a;
  if (op == '-')
    return b - a;
  if (op == '*')
    return b * a;
  return b / a;
}

int RPN::ft_pop(std::stack<int>& s) {
  if (s.empty())
    throw RPN::InvalidExpressionException();
  int ret = s.top();
  s.pop();
  return ret;
}
