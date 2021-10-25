#include <iostream>
#include <unistd.h>

auto main() -> int
{

   for (int i=10; i>=0; i--)

   {
       usleep(1000);
       std::cout <<i<< "\n";
   }
   std::cout <<"Happy new year!" << "\n";

    return 0;
}

