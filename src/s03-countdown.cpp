#include <iostream>
#include <chrono>
#include <thread>

auto main() -> int
{

  for (int i=10; i>=0; i--)
  {
   std::this_thread::sleep_for(std::chrono::milliseconds{1000});
   std::cout <<i<< "\n";
   }
    std::cout <<"Happy new year!" << "\n";
    return 0;
}

