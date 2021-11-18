#include <iostream>

auto main(int argc, char *argv[]) -> int
{
  if (argc < 3 || argc > 3) {
    std::cerr << "I need two arguments! No more, no less..\n";
    return 1;
  }

  auto const a = std::stoi(argv[1]);
  auto const b = std::stoi(argv[2]);
  if (b == 0) {
    std::cout << "We do not divide by 0!\n";
  }
  else {
    std::cout << (a / b) << "\n";
  }

  return 0;
}
