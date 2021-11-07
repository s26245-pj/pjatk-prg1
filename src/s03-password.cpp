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
   auto a = ask_user_for_password("password: ");
   while (a != argv[1]){
   a = ask_user_for_password("password: ");   
   }
   std::cout << "Password correct!\n";

   return 0;
}
