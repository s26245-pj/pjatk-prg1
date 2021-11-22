#include <iostream>
#include <string>

struct student {
   std::string student_name;
   std::string student_surname;
   std::string index_number;
   float grades_average; 
   
} my_details;


auto main() -> int
{
   my_details.student_name = "Michał";
   my_details.student_surname = "Jastrzemski";
   my_details.index_number = "s26245";

}
