#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

auto main(int argc, char *argv[]) -> int 
{
  if (argc == 1) {
    return 0;
  }

  auto separator = " ";
  auto reverse = false;
  auto newline = true;

  auto const OPT_SEPARATOR = std::string{"-l"};
  auto const OPT_REVERSE = std::string{"-r"};
  auto const OPT_NEWLINE = std::string{"-n"};

  auto args_to_print = std::vector<std::string>{};
  {
    auto i = 1;
    for (; i < argc; i++) {
      if (argv[i] == OPT_SEPARATOR) {
        separator = "\n";
      } else if (argv[i] == OPT_REVERSE) {
        reverse = true;
      } else if (argv[i] == OPT_NEWLINE) {
        newline = false;
      } else {
        break;
      }
    }
    std::copy(argv + i, argv + argc, std::back_inserter(args_to_print));
  }

  static_cast<void>(reverse);
  static_cast<void>(newline);

  if (reverse) {
    std::reverse(args_to_print.begin(), args_to_print.end());
  }

  std::cout << args_to_print[0];
  for (auto i = size_t{1}; i < args_to_print.size(); ++i) {
    std::cout << separator << args_to_print[i];
  }

  if (newline) {
    std::cout << "\n";
  }

  return 0;
}
