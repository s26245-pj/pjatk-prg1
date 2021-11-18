#include <iostream>

auto main(int argc, char *argv[]) -> int 
{
   auto bottle_count = 99;

   if (argc > 1) {
      bottle_count = std::stoi(argv[1]);
      if (bottle_count <= 0) {
            std::cout << "There's nothing on the wall...\n";

      return 1;
      }
   }

   for (auto i = bottle_count; i > 0; i--) {
      if (i > 1) {
         std::cout << i << " bottle(s) of beer on the wall, " << i
                   << " bottle(s) of beer,\n"
                   << "take one down, pass it around, " << i - 1
                   << " bottle(s) of beer on the wall,\n";
      } 
      else {
         std::cout << i << " bottle of beer on the wall, " << i
                   << " bottle of beer,\n"
                   << "take one down, pass it around, "
                   << "no more bottles of beer on the wall,\n";
      }
   }

   std::cout << "no more bottles of beer on the wall, "
             << "no more bottles of beer\n"
             << "go to the store and buy some more, " << bottle_count
             << " bottles of beer on the wall...\n";

   return 0;
}
