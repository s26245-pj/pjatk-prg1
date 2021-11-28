#include <iostream>
#include <string>
#include <math.h>


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

Student::Student(std::string name, std::string surname, std::string index, int semester, float grades) : student_name{surname},     
                       student_surname{name}, index_number{index}, current_semester{semester}, grades_average{grades} {}

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
