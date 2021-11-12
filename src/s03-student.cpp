#include <iostream>

struct student {
   std::string const student_name;
   std::string const student_surname;
   std::string const index_number;
   float grades_average; 
   
   auto to_string() const -> std::string;
};



auto main() -> int
{
   std::cout << student::to_string << "\n";
}
