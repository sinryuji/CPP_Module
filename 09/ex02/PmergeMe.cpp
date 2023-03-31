#include "PmergeMe.hpp"
#include <limits>

/*
 * -------------------------- Constructor --------------------------
 */

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe& origin) {
  (void)origin;
}

/*
 * -------------------------- Destructor ---------------------------
 */

PmergeMe::~PmergeMe(void) {}

/*
 * -------------------------- Operator -----------------------------
 */

PmergeMe& PmergeMe::operator=(const PmergeMe& origin) {
  if (this != &origin) {}
  return *this;
}

/*
 * ----------------------- Member Function -------------------------
 */

void PmergeMe::sort(char** argv) {
  std::deque<int> d;
  std::list<int> l;

  parseContainer(d, argv);
  parseContainer(l, argv);
  std::cout << "Before:  ";
  printContainer(d);

  clock_t start1 = clock();
  sortContainer(d, 0, d.size() - 1);
  sortContainer(l, 0, l.size() - 1);
}

void PmergeMe::validateInput(std::string input) {
  for (size_t i = 0; input[i]; i++) {
    if (!std::isdigit(input[i]))
      throw std::invalid_argument("invalid argument => " + input);
  }
  long tmp = std::atol(input.c_str());
  if (tmp > std::numeric_limits<int>::max())
    throw std::invalid_argument("input is greater than max value of int => " + input);
}
