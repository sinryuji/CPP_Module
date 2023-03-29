#include "BitcoinExchange.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

BitcoinExchange::BitcoinExchange(void) {
  this->parseDB();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& origin) {
  this->db = origin.db;
}

BitcoinExchange::BitcoinExchange(std::string file_name) : input_file(file_name){
  this->parseDB();
}

/*
 * -------------------------- Destructor ---------------------------
 */

BitcoinExchange::~BitcoinExchange(void) {}

/*
 * -------------------------- Operator -----------------------------
 */

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& origin)
{
  if (this != &origin)
    this->db = origin.db;

  return *this;
}

/*
 * -------------------------- Getter -------------------------------
 */

/*
 * -------------------------- Setter -------------------------------
 */

/*
 * ------------------------ Overriding -----------------------------
 */

const char* FileOpenException::what() const throw() {
  return "Error: File Open Error!";
}

BitcoinExchange::BadInputException::BadInputException(std::string input) {
  this->message = "Error: bad input => " + input;
}

BitcoinExchange::BadInputException::~BadInputException(void) throw() {}

const char* BitcoinExchange::BadInputException::what() const throw() {
  return this->message.c_str();
}

const char* BitcoinExchange::NotPositiveException::what() const throw() {
  return "Error: not a positive number.";
}

const char* BitcoinExchange::TooLargeException::what() const throw() {
  return "Error: too large a number.";
}

/*
 * ----------------------- Member Function -------------------------
 */

void BitcoinExchange::parseDB() {
  std::ifstream file(k_db_name);
  std::string line;

  if (!file.is_open())
    throw FileOpenException();
  while (std::getline(file, line)) {
    std::vector<std::string> s = split(line, ',');
    this->db.insert(std::pair<std::string, double>(s[0], std::atof(s[1].c_str())));
  }
  file.close();
}

void BitcoinExchange::printDB(void) {
  std::cout << "len: " << this->db.size() << std::endl;
  std::cout.precision(9);
  for (std::map<std::string, double>::iterator it = this->db.begin(); it != this->db.end(); ++it)
    std::cout << it->first << " " << it->second << std::endl;
}

void BitcoinExchange::exchange() {
  std::ifstream file(this->input_file);
  std::string line;

  if (!file.is_open())
    throw FileOpenException();
  while (std::getline(file, line)) {
    std::vector<std::string> s = split(line, '|');
    if (s[0] == "date" && s[1] == "value")
      continue;
    try {
      validateInput(s, line);
      std::cout.precision(9);
      std::cout << s[0] << " => " << s[1] << " = " << getExchangeRate(s[0]) * std::atof(s[1].c_str()) << std::endl;
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }
  file.close();
}

void BitcoinExchange::validateInput(std::vector<std::string> s, std::string line) {
  if (s.size() != 2)
    throw BitcoinExchange::BadInputException(line);

  std::vector<std::string> v = split(s[0], '-');

  if (v.size() == 3) {
    if (!ft_isdate(v[0]) || !ft_isdate(v[1]) || !ft_isdate(v[2])) {
      throw BitcoinExchange::BadInputException(line);
    }
    if (std::atoi(v[1].c_str()) > 12 || std::atoi(v[2].c_str()) > 31)
      throw BitcoinExchange::BadInputException(line);
  }
  else
    throw BitcoinExchange::BadInputException(line);

  if (!ft_isvalue(s[1]))
    throw BitcoinExchange::BadInputException(line);
  if (std::atof(s[1].c_str()) < 0)
    throw BitcoinExchange::NotPositiveException();
  if (std::atof(s[1].c_str()) > 1000)
    throw BitcoinExchange::TooLargeException();
}

double BitcoinExchange::getExchangeRate(std::string& date) {
  std::map<std::string, double>::iterator it = this->db.find(date);
  if (it != this->db.end())
    return it->second; 
  it = db.upper_bound(date);
  if (it != this->db.begin())
    --it;
  return it->second;
}

/*
 * ---------------------- Non-Member Function ----------------------
 */

std::vector<std::string> split(std::string& str, char delim) {
  std::vector<std::string> ret;
  std::stringstream ss(str);
  std::string tmp;

  while (std::getline(ss, tmp, delim)) {
    if (std::isspace(tmp[0]))
      tmp.erase(0, 1);
    if (std::isspace(tmp[tmp.length() - 1]))
      tmp.erase(tmp.length() - 1, 1);
    ret.push_back(tmp);
  }

  return ret;
}

bool ft_isdate(std::string &str) {
  for (size_t i = 0; i < str.length(); i++)
    if (!std::isdigit(str[i]))
      return false;
  return true;
}

bool ft_isvalue(std::string& str) {
  bool point_flag = false;

  if (str[0] != '-' && !std::isdigit(str[0]))
    return false;
  for (size_t i = 1; i < str.length(); i++) {
    if (!(std::isdigit(str[i]) || str[i] == '.'))
      return false;
    if (str[i] == '.') {
      if (!point_flag)
        point_flag = true;
      else
        return false;
    }
  }
  return true;
}
