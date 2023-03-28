#include "BitcoinExchange.hpp"
#include <cstdlib>

int main(int argc, char** argv){
  if (argc < 2) {
    std::cerr << "Error: could not open file." << std::endl;
    return EXIT_FAILURE;
  }
  if (argc > 2) {
    std::cerr << "Error: too many argument." << std::endl;
    return EXIT_FAILURE;
  }
  try {
    BitcoinExchange be(argv[1]);
    be.exchange();
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return EXIT_SUCCESS;
}
