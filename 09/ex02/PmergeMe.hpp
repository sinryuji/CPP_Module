#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <deque>
# include <list>
# include <cctype>
# include <stdexcept>
# include <limits> 

class PmergeMe {
  public:
    PmergeMe(void);
    PmergeMe(const PmergeMe& origin);
    ~PmergeMe(void);
    PmergeMe& operator=(const PmergeMe& origin);
    void sort(char** argv);

		template <typename Container>
    void parseContainer(Container& c, char** argv) {
      for (int i = 0; argv[i]; i++) {
        validateInput(argv[i]);
        c.push_back(std::atoi(argv[i]));
      }
    }

  private:
    void validateInput(std::string input);

		template <typename Container>
    void printContainer(Container& c) {
      for (typename Container::iterator it = c.begin(); it != c.end(); ++it)
        std::cout << *it << " ";
      std::cout << std::endl;
    }

    template <typename Container>
    void sortContainer(Container& c) {
      
    }
};

#endif
