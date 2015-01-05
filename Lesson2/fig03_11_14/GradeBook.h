//
//  GradeBook.h
//  Lesson2Dietel
//
//  Created by Daniel Chan on 1/4/15.
//  Copyright (c) 2015 Pookeye Inc. All rights reserved.
//
#include <iostream>
using std::cout;
using std::endl;

#include <string> //class GradeBook uses C++ standard string class
using std::string;

//GradeBook Class Definition
class GradeBook
{
public:
    GradeBook( string ); //constructor that initiliaizes courseName
    void setCourseName( string ); //function that sets the course name
    string getCourseName(); //function that gets the course name
    void displayMessage(); //function taht displays a welcome message
private:
    string courseName; //course name for this GradeBook
    
};//end class GradeBook
