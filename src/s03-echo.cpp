#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>


auto main(int argc, char* argv[]) -> int
{
   std::string L = "-l";
   std::string R = "-r";
   std::string N = "-n";
   auto args = std::vector<std::string>{};
   std::copy_n(argv, argc, std::back_inserter(args));
      
   if (std::find(args.begin(), args.end(), R) != args.end()){
      for (auto i = 1; i < argc; i++) {
         std::copy_n(argv, argc, std::back_inserter(args));         
         std::reverse(args.begin(), args.end());
         std::cout << args[i] << " ";   
      }
      std::cout << "\n";
   }

   if (std::find(args.begin(), args.end(), L) != args.end()){
      for (auto i = 1; i < argc; i++) {
         std::copy_n(argv, argc, std::back_inserter(args));
         std::cout << args[i] << "\n";   
      }
   }

   if (std::find(args.begin(), args.end(), N) != args.end()){
      for (auto i = 1; i < argc; i++) {
         std::copy_n(argv, argc, std::back_inserter(args));
         std::cout << args[i] << " ";   
      }
   }

   else {
      for (auto i = 1; i < argc; i++) {
         std::cout << args[i] << " ";   
      }
      std::cout << "\n";
   }  
   
   return 0;
}


