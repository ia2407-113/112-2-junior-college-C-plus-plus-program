#pragma once
#include <iostream>
using namespace std;

 class course
 {
 public:
     
     void displayMessage() const;// end function displayMessage
     void setCourse(string name);
     void setCourseTeacher(string inputteacher);
     void setCourseID(string ID);
     string getCourseID();
     string getCourseTeacher();
 private:

     string course_name = "Computer Networks";
     string courseID = "123";
     string teacher = "abc";
 };
    


    
    

 
    
    


