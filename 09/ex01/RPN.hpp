#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>

class RPN {
  public:
    RPN(void);
    RPN(const RPN& origin);
    ~RPN(void);
    RPN& operator=(const RPN& origin);
};

#endif
