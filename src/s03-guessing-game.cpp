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
    auto attempt = 1;
    auto rnd = std::random_device{};
    auto d = std::uniform_int_distribution<int>{1, 100};
    auto number = d(rnd); 
    auto guess = ask_user_for_integer("Guess number from 1 to 100: ");
  
    while (guess != number){
    attempt++;
    if (guess < number){
    std::cout <<"Too small. try again, it's your " << attempt << " attempt\n";
    }
    else if (guess > number){
    std::cout << "Too big, try again, it's your " << attempt << " attempt\n";
    }

    guess = ask_user_for_integer("Guess number from 1 to 100: ");
    }

    std::cout << "That's right, you won in " << attempt << " attempt!" << "\n";
    
    return 0;
}

