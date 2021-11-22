#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int 
{
  if (argc == 1) {
    std::cout << "There's no one to say hello to...\n";
  }

  auto const name = std::string{argv[1]};

  std::cout << "Hello, " << name << "!\n";

  return 0;
}
