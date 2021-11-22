#include <iostream>
#include <string>

struct Student 
{
   std::string student_name;
   std::string student_surname;
   std::string index_number;
   int current_semester;
   float grades_average; 

   auto to_string() const -> std::string {
      return ("Student name: " + student_name
           + "\nStudent surname: " + student_surname
           + "\nStudent index number: " + index_number
           + "\nCurrent semester: " + std::to_string(current_semester)
           + "\nGrades point average: " + std::to_string(grades_average)
      );       
   }
};


auto main() -> int
{
   Student my_details;
   
   my_details.student_name = "Michał";
   my_details.student_surname = "Jastrzemski";
   my_details.index_number = "s26245";
   my_details.current_semester = 1;
   my_details.grades_average = 4.57;

   std::cout << my_details.to_string() << "\n";
}
