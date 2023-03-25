#include "BitcoinExchange.hpp"

int main(int argc, char** argv){
  (void)argc;
  (void)argv;
  try {
    BitcoinExchange be;
    be.printDB();
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}
