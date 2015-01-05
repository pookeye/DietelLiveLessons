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
    //constructor initializes courseName with string supplied as argument
    GradeBook ( string name)
    {
        setCourseName(name);
    }
    void setCourseName( string name )
    {
        courseName = name; //store the course name in the object
    }//end function setCourseName
    string getCourseName()
    {
        return courseName; // return the object's courseName
    }
    //function that displays a welcome message to the gradebook user
    void displayMessage()
    {
        cout << "Welcome to the Gradebook for\n" << getCourseName() << "!" << endl;
    } //end function displayMessage
private:
    string courseName; //course name for this GradeBook
    
};//end class GradeBook
