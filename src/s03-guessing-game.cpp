#include <iostream>
#include <cstdlib>
#include <ctime>

auto ask_user_for_integer(std::string prompt) -> int
{
   std::cout << prompt;
   auto guess = std::string{};
   std::getline(std::cin, guess);
   return std::stoi(guess);
}

auto main() -> int
{
    int number;
    srand(time(NULL));
    number = rand()%100+1;
    auto a = ask_user_for_integer("Guess number from 1 to 100: ");

    while (a != number){
    a = ask_user_for_integer("Guess number from 1 to 100: ");   
    if (number == a)
    std::cout <<"That's right, you won!" << "\n";
    else if (a > number)
    std::cout << "Too big, try again " << "\n";
    else if (a < number)
    std::cout << "Too small, try again " <<"\n";
    }
   

    return 0;
}

