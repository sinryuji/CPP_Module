#include "RPN.hpp"

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cout << "Error: invalid number of arguments" << std::endl;
    return EXIT_FAILURE;
  }

  try {
    RPN rpn;
    rpn.calc(argv[1]);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  return EXIT_SUCCESS;
}
