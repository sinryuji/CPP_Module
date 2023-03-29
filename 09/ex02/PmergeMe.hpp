#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

class PmergeMe {
  public:
    PmergeMe(void);
    PmergeMe(const PmergeMe& origin);
    ~PmergeMe(void);
    PmergeMe& operator=(const PmergeMe& origin);
};

#endif
