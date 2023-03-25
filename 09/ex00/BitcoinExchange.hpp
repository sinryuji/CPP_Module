#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <vector>
# include <fstream>
# include <sstream>

typedef std::map<std::string, float> date;
static const std::string k_db_name = "data.csv";

class BitcoinExchange {
  public:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange& origin);
    ~BitcoinExchange(void);
    BitcoinExchange& operator=(const BitcoinExchange& origin);
    void printDB(void);

  private:
    std::map<std::string, float> db;
    void createDataBase(void);
};

std::ifstream readFile(const std::string& file_name);
std::vector<std::string> split(std::string& str, char delim);
date strToDate(std::string& str);

class FileOpenException : public std::exception
{
  public:
    const char* what(void) const throw();
};

#endif
