#include <iostream>

auto main() -> int
{
for (auto bottle_count = 99; bottle_count > 1; bottle_count--){
   std::cout<< bottle_count << " bottles of beer on the wall" << "\n";
   std::cout<< bottle_count << " bottles of beer" << "\n";
   std::cout<< "take one down, pass it around" << "\n";   
   }
      
   std::cout<< "1 bottle of beer on the wall" << "\n";
   std::cout<<  "1 bottle of beer" << "\n";
   std::cout<< "take one down, pass it around" << "\n";    
   std::cout<< "no more bottles of beer" << "\n";
   std::cout<< "Go to the store and buy some more" << "\n";
   std::cout<< "99 bottles of beer on the wall..." << "\n";
   return 0;
}
