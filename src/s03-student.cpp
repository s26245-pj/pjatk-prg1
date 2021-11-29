#include <iostream>
#include <string>
#include <s26245/Student.h>

Student::Student(std::string name, std::string surname, std::string index, int semester, float grades) : student_name{name},     
                       student_surname{surname}, index_number{index}, current_semester{semester}, grades_average{grades} {}

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
