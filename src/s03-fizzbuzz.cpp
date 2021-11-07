#include <iostream>

auto ask_user_for_integer(std::string prompt) -> int
{
   std::cout << prompt << "Enter the amount of numbers: ";
   auto amount_of_numbers = std::string{};
   std::getline(std::cin, amount_of_numbers);
   return std::stoi(amount_of_numbers); 
}

auto main(int argc, char* argv[]) -> int

{

    for (auto i = 1; i<=n; i++)
    {
    if ((i%3==0 && i%5==0))
    {
        std::cout << i << " FizzBuzz" << "\n";
    }
    else if (i%3==0)
    {
        std::cout << i << " Fizz" << "\n";
    }
    else if (i%5==0)
    {
        std::cout << i << " Buzz" << "\n";
    }
    }
    return 0;
}

