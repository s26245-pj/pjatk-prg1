#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

auto main (int argc, char* argv[]) -> int
{    
  auto args = std::vector<std::string>{};
  std::copy_n(argv, argc, std::back_inserter(args));
  
  for (auto const& each_arg : args){
  if (argv[1] = -n){
  std::cout << each_arg << " ";
  }
  std::cout << "\n";
  return 0;
}
