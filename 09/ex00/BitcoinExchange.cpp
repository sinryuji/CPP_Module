#include "BitcoinExchange.hpp"

/*
 * -------------------------- Constructor --------------------------
 */

BitcoinExchange::BitcoinExchange(void) {
  this->createDataBase();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& origin) {
  this->db = origin.db;
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
 * -------------------------- Overriding ---------------------------
 */

const char* FileOpenException::what() const throw()
{
	return "File Open Error!";
}

/*
 * -------------------------- Function -----------------------------
 */

void BitcoinExchange::createDataBase() {
  std::ifstream file = readFile(k_db_name);
  std::string line;

  while (std::getline(file, line)) {
    std::vector<std::string> s = split(line, ',');
    this->db.insert(std::pair<std::string, float>(s[0], std::atof(s[1].c_str())));
  }
  file.close();
}

std::ifstream readFile(const std::string& file_name) {
  std::ifstream file(file_name, std::ifstream::in);

  if (!file.is_open())
    throw FileOpenException();

  return file;
}

std::vector<std::string> split(std::string& str, char delim) {
  std::vector<std::string> ret;
  std::stringstream ss(str);
  std::string tmp;

  while (std::getline(ss, tmp, delim))
    ret.push_back(tmp);

  return ret;
}

void BitcoinExchange::printDB(void) {
  std::cout << "len: " << this->db.size() << std::endl;
  for (std::map<std::string, float>::iterator it = this->db.begin(); it != this->db.end(); ++ it)
    std::cout << it->first << " " << it->second << std::endl;
}

date strToDate(std::string& str) {
  date d;

  std::vector<std::string> s = split(str, ':');
  d.insert(std::pair<std::string, float>("year", std::atof(s[0].c_str())));
  d.insert(std::pair<std::string, float>("month", std::atof(s[1].c_str())));
  d.insert(std::pair<std::string, float>("day", std::atof(s[2].c_str())));
 
  return d; 
}
