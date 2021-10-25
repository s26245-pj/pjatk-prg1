#include <iostream>
#include <cstdlib>
#include <ctime>

int number, guess;
auto main() -> int

{
    srand(time(NULL));
    number = rand()%100+1;
    std::cout << "Guess the number from 1 to 100: ";
    
    while (guess != number)
{
     std::cin >> guess;

    if (number==guess)
    {
        std::cout <<"That's right, you won!" << "\n";
    }
    else if (guess>number)
    {
        std::cout << "Too big, try again " << "\n";
    }
    else if (guess<number)
    {
        std::cout << "Too small, try again " <<"\n";
    }
}

    return 0;
}

