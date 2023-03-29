#include "PmergeMe.hpp"

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
  printContainer(d);
  printContainer(l);
}
