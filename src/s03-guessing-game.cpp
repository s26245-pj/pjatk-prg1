#include <iostream>
#include <random>
#include <cstring>

auto ask_user_for_integer(std::string prompt) -> int
{
   std::cout << prompt;
   auto guess = std::string{};
   std::getline(std::cin, guess);
   return std::stoi(guess);
}

auto main() -> int
{
    auto rnd = std::random_device{};
    auto d = std::uniform_int_distribution<int>{1, 100};
    auto number = d(rnd); 
    auto guess = ask_user_for_integer("Guess number from 1 to 100: ");
  
    while (guess != number){
    if (guess < number)
    std::cout <<"Too small. try again!\n";
    else if (guess > number)
    std::cout << "Too big, try again\n";

    guess = ask_user_for_integer("Guess number from 1 to 100: ");
    }

    std::cout << "That's right, you won!\n";
    
    return 0;
}

