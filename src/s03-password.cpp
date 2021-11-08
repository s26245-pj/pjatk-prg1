#include <iostream>
#include <string>


auto ask_user_for_password(std::string prompt) -> std::string
{
   auto line = std::string{};
   std::cout << prompt;
   std::getline(std::cin, line);
   return line;
}
   
auto main(int, char* argv[]) -> int
{  
   auto a = ask_user_for_password;
   while (a("password: ") != argv[1]){
   std::cout << "Password incorrect!" << "\n";
   }
   std::cout << "Password correct!" << "\n";
   return 0;
}
