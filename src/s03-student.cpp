#include <iostream>
#include <string>
#include <math.h>

struct Student 
{
   const std::string student_name;
   const std::string student_surname;
   const std::string index_number;
   int current_semester;
   float grades_average; 

   auto to_string() const -> std::string;      
};


auto Student::to_string() const -> std::string 
{
   std::string Grades = std::to_string(grades_average);
   std::string Semester = std::to_string(current_semester);

  return (student_name + " " + student_surname + " (" + index_number 
          +  "), semester "  + Semester + ": " + Grades);    
}

auto main() -> int

{
   auto me = Student{"Michał", "Jastrzemski", "s26245", 1, 4.75};
   std::cout << me.to_string() << "\n";
}
