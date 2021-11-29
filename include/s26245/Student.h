#include <iostream>
#include <string>

struct Student 
{
   std::string const student_name;
   std::string const student_surname;
   std::string const index_number;
   int current_semester;
   float grades_average; 
   auto to_string() const -> std::string;

   Student(std::string student_name, std::string student_surname, std::string index_number, int current_semester, float              
           grades_average);
};

