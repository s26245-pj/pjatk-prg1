#include <iostream>

auto main() -> int

{
    int n;
    std::cout << "Enter the amount of numbers: ";
    std::cin >> n;


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

