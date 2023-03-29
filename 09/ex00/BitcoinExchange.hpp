#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <vector>
# include <fstream>
# include <sstream>
# include <cctype>

static const std::string k_db_name = "data.csv";

class BitcoinExchange {
  public:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange& origin);
    ~BitcoinExchange(void);
    BitcoinExchange& operator=(const BitcoinExchange& origin);
    void printDB(void);
    void exchange(std::string input);

  private:
    std::map<std::string, double> db;

    void parseDB(void);
    void validateInput(std::vector<std::string> s, std::string line);
    double getExchangeRate(std::string& date);
    bool ft_isdate(std::string& str);
    bool ft_isvalue(std::string & str);

  public:
    class BadInputException : public std::exception {
      private:
        std::string message;

      public:
        BadInputException(std::string hinput);
        ~BadInputException(void) throw();
        const char* what(void) const throw();
    };
    class NotPositiveException : public std::exception {
      public:
        const char* what(void) const throw();
    };
    class TooLargeException : public std::exception {
      public:
        const char* what(void) const throw();
    };
};

std::vector<std::string> split(std::string& str, char delim);

class FileOpenException : public std::exception {
  public:
    const char* what(void) const throw();
};

#endif
