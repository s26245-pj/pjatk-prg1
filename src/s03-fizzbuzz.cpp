#include <iostream>

auto ask_user_for_integer(std::string prompt) -> int
{
   std::cout << prompt;
   auto amount_of_numbers = std::string{};
   std::getline(std::cin, amount_of_numbers);
   return std::stoi(amount_of_numbers); 
}

auto main() -> int
{
   auto const a = ask_user_for_integer("Enter the amount of numbers: ");

   for (auto i = 1; i <= a; i++){
     if ((i % 3 == 0 && i % 5 == 0)) 
       std::cout << i << " FizzBuzz\n";
     else if (i % 3 == 0)  
       std::cout << i << " Fizz\n";
     else if (i % 5 == 0)    
       std::cout << i << " Buzz\n"; 
   }
   return 0;
}

