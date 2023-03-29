#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <deque>
# include <list>

class PmergeMe {
  public:
    PmergeMe(void);
    PmergeMe(const PmergeMe& origin);
    ~PmergeMe(void);
    PmergeMe& operator=(const PmergeMe& origin);
    void sort(char** argv);

		template <typename Container>
    void parseContainer(Container& c, char** argv) {
      for (int i = 0; argv[i]; i++)
        c.push_back(std::atoi(argv[i]));
    }

  private:
		template <typename Container>
    void printContainer(Container& c) {
      for (typename Container::iterator it = c.begin(); it != c.end(); ++it)
        std::cout << *it << " ";
      std::cout << std::endl;
    }
};

#endif
