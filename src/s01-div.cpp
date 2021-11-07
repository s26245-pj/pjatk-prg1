#include <iostream> 
#include <string>

auto main(int, char* argv[]) -> int
{
   auto const a = std::stoi(argv[1]);
   auto const b = std::stoi(argv[2]);
   if (b == 0)
   std::cout << "We do not divide by 0!" << "\n";
   else
   std::cout << (a / b) << "\n";
   return 0;
}

