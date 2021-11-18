#include <iostream>

auto main(int argc, char* argv[]) -> int
{
   auto bottle_count = 99;

   if (argc > 1){
      bottle_count = std::stoi(argv[1]);
      if (bottle_count <= 0){
         std::cout << "There's nothing on the wall...\n";
      
      return 1;
      }
   }
      
   for (auto i = bottle_count; i > 1; i--){
      std::cout << i << " bottles of beer on the wall\n"
                << i << " bottles of beer\n"
                << "take one down, pass it around\n"
                << i - 1 << " bottles of beer on the wall\n";  
   }
      
   std::cout << "1 bottle of beer on the wall\n"
             <<  "1 bottle of beer\n"
             << "take one down, pass it around\n"   
             << "no more bottles of beer\n"
             << "Go to the store and buy some more\n"
             << bottle_count << " bottles of beer on the wall...\n";
   return 0;
}
