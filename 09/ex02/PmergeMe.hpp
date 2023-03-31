#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <deque>
# include <vector>
# include <cctype>
# include <stdexcept>
# include <limits> 

const static int K = 16;

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
    void sortContainer(Container& c, int p, int r) {
      if (r - p > K) {
        int q = (p + r) / 2;
        sortContainer(c, p, q);
        sortContainer(c, q + 1, r);
        mergeContainer(c, p, q, r);
      }
      else
        insertionSort(c, p, r);
    }

    template <typename Container>
    Container copyContainer(Container& c, int p, int q) {
      Container ret;

      for (int i = p; i < q; i++)
        ret.push_back(c[i]);

      return ret;
    }

    template <typename Container>
    void mergeContainer(Container& c, int p, int q, int r) {
      int n1 = q - p + 1;
      int n2 = r - q;
      Container LA = copyContainer(c, p, q + 1);
      Container RA = copyContainer(c, q + 1, r + 1);
      int RIDX = 0;
      int LIDX = 0;
      for (int i = p; i < r + 1; i++) {
        if (RIDX == n2) {
          c[i] = LA[LIDX];
          LIDX++;
        } else if (LIDX == n1) {
          c[i] = RA[RIDX];
          RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
          c[i] = LA[LIDX];
          LIDX++;
        } else {
          c[i] = RA[RIDX];
          RIDX++;
        }
      }
    }

    template <typename Container>
    void insertionSort(Container& c, int p, int q) {
      for (int i = p; i < q; i++) {
        int tmp = c[i + 1];
        int j = i + 1;
        while (j > p && c[j - 1] > tmp) {
          c[j] = c[j - 1];
          j--;
        }
        c[j] = tmp;
      }
    }

    template <typename Container>
    bool isSorted(Container& c) {
      typename Container::iterator it = c.begin();
      int prev = *it;
      ++it;
      for (; it != c.end(); ++it) {
        if (*it < prev)
          return false;
        prev = *it;
      }
      return true;
    }
};

#endif
