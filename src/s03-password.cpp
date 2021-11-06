#include <iostream>
#include <string>

std::string password;
auto main() ->int
{
    do
    {
    std::cout << "Password:";
    std::cin >> password;
    }
    while(password! = "student");
    std::cout << "Password is correct!";
    return 0;
}

