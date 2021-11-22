#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int 
{
  if (argc < 2) {
    std::cout << "There's no one to say hello to...\n";
    return 1;
  }

  auto const name = std::string{argv[1]};

  std::cout << "Hello, " << name << "!\n";

  return 0;
}
