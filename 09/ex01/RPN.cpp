#include "RPN.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

RPN::RPN(void) {}

RPN::RPN(const RPN& origin) {
  (void)origin;
}

/*
 * -------------------------- Destructor ---------------------------
 */

RPN::~RPN(void) {}

/*
 * -------------------------- Operator -----------------------------
 */

RPN& RPN::operator=(const RPN& origin) {
  if (this != &origin) {}
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

int RPN::calc(std::string input) {
  std::stack<int> s;

  for (size_t i = 0; i < input.length(); i++) {
    if (!validateInput(input[i]))
      throw RPN::InvalidInputException();
    if (std::isdigit(input[i]))
      s.push(input[i] - '0');
    if (isOperator(input[i])) {
      if (s.size() < 2)
        throw RPN::InvalidExpressionException();
      s.push(calcOp(ft_pop(s), ft_pop(s), input[i]));
    }
  }
  if (s.size() != 1)
    throw RPN::InvalidExpressionException();
  return ft_pop(s);
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
