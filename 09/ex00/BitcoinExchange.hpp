#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <vector>
# include <fstream>
# include <sstream>
# include <cctype>
# include <stdexcept>

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
    bool isValue(std::string& str);
    void validateDate(std::vector<std::string>& v);
    void validateValue(std::string& str);
};

std::vector<std::string> split(std::string& str, char delim);
bool strIsDigit(std::string& str);

#endif
