#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>

struct Time 
{
   int hour;
   int minute;
   int second;
   
   auto to_string() const -> std::string;
   auto next_hour() -> void;
   auto next_minute() -> void;
   auto next_second() -> void;
};

auto Time::to_string() const -> std::string
{
   std::string Hour = std::to_string(hour);
   std::string Min = std::to_string(minute);
   std::string Sec = std::to_string(second);

   if (hour < 10) {
      Hour = "0" + Hour;
   }
   if (minute < 10) {
      Min = "0" + Min;
   }
   if (second < 10) {
      Sec = "0" + Sec;
   }
   return (Hour + ":" + Min + ":" + Sec);
}

auto Time::next_hour() -> void
{
   if (hour < 23){
      hour ++;
   } else {
      hour = 0;
   }
}

auto Time::next_minute() -> void
{ 
   if (minute < 59){
      minute ++;
   } else {
      next_hour();
      minute = 0;
   }
}

auto Time::next_second() -> void
{ 
   if (second < 59){
      minute ++;
   } else {
      next_minute();
      second = 0;
   };
}


auto main () -> int
{
   Time time;
   time.hour = 23;
   time.minute = 59;
   time.second = 59;

   std::cout << time.to_string() << "\n" ;
   time.next_hour();
   std::cout << time.to_string() << "\n" ;
   time.next_minute();
   std::cout << time.to_string() << "\n" ;
   time.next_second();
   std::cout << time.to_string() << "\n" ;

   return 0;       
}
