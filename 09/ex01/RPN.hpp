#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN {
  public:
    RPN(void);
    RPN(const RPN& origin);
    ~RPN(void);
    RPN& operator=(const RPN& origin);
    void calc(std::string input);

  private:
    bool validateInput(char c);
    bool isOperator(char c);
    int calcOp(int a, int b, char op);
    int ft_pop(std::stack<int>& s);

  public:
    class InvalidInputException : public std::exception {
      public:
        const char* what(void) const throw();
    };
    class InvalidExpressionException : public std::exception {
      public:
        const char* what(void) const throw();
    };
};

#endif
