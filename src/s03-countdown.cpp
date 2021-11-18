#include <chrono>
#include <iostream>
#include <string>
#include <thread>

auto main(int, char *argv[]) -> int
{
   auto x = std::string{argv[1]};
   int begin = std::stoi(x);

   if (begin == 0){
      std::cout << "There's nothing to count...\n"; 
      return 1;
   }
   else if (begin < 0){
      std::cerr << "I can't do that...\n";
      return 2;
   }
        
   for (auto i = begin; i >= 0; i--) {
      std::this_thread::sleep_for(std::chrono::milliseconds{1000});
      std::cout << i << "\n";
   }
   return 0;
}
