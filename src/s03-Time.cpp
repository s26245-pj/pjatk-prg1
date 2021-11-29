#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <s26245/Time.h>

Time::Time(int Hour, int Min, int Sec) : hour{Hour}, minute{Min}, second{Sec} {}

auto Time::to_string() const -> std::string
{
   std::string Hour = std::to_string(hour);
   std::string Minute = std::to_string(minute);
   std::string Second = std::to_string(second);

   if (hour < 10) {
      Hour = "0" + Hour;
   }
   if (minute < 10) {
      Minute = "0" + Minute;
   }
   if (second < 10) {
      Second = "0" + Second;
   }
   return (Hour + ":" + Minute + ":" + Second);
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
   }
}

auto Time::time_of_day() const -> Time_of_day
{
   if ((hour >= 6 && hour < 12)) {
      return Time_of_day::Morning;
   } else if ((hour >= 12) && (hour < 17)) {
      return Time_of_day::Day;
   } else if ((hour >= 17) && (hour < 22)) {
      return Time_of_day::Evening;
   } else if ((hour >= 22) && (hour < 6)) {
      return Time_of_day::Night;
   } else {
      return Time_of_day::Not_time_of_day;
   }
}

auto Time::to_string(Time_of_day n) -> std::string
{
   if (n == Time_of_day::Morning) {
      return "Morning";
   } else if (n == Time_of_day::Day) {
      return "Day";
   } else if (n == Time_of_day::Evening) {
      return "Evening";
   } else  
      return "Night"; 
}

auto main () -> int
{
   auto time = Time{23, 59, 59};
   auto newtime = Time{20, 30, 25};

   std::cout << time.to_string() << "\n" ;
   time.next_hour();
   std::cout << time.to_string() << " one hour later..." << "\n" ;
   time.next_minute();
   std::cout << time.to_string() << " one minute later.." <<"\n" ;
   time.next_second();
   std::cout << time.to_string() << " one second later.." << "\n";
   std::cout << "Day Time: " << time.to_string(time.time_of_day()) << "\n";
   std::cout << newtime.to_string() << "\n";
  
   return 0;       
}
