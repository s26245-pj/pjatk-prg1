# include <algorithm>
# include <iostream>
# include <iterator>
# include <string>
# include <vector>

auto main (int argc, char* argv[]) -> int
{
   auto args = std::vector<std::string>{};
   std::copy_n(argv, argc, std::back_inserter(args));
   for (auto const& each : args)
   {
   std :: cout << each << "\n";}

return 0;
}
