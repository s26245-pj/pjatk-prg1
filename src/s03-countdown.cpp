#include <chrono>
#include <iostream>
#include <string>
#include <thread>

auto main(int, char *argv[]) -> int
{
  auto x = std::string{argv[1]};
  int begin = stoi(x);

  for (auto i = begin; i >= 0; i--) {
    std::this_thread::sleep_for(std::chrono::milliseconds{1000});
    std::cout << i << "\n";
  }
  return 0;
}
