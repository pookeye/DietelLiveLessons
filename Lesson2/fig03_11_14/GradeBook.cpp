//
//  GradeBook.cpp
//  Lesson2Dietel
//
//  Created by Daniel Chan on 1/4/15.
//  Copyright (c) 2015 Pookeye Inc. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include <String>
using std::string;


#include "GradeBook.h" //include definition of class GradeBook



//constructor initializes courseName with string supplied as argument
GradeBook::GradeBook ( string name)
    {
        setCourseName( name );
    }
void GradeBook::setCourseName( string name )
    {
        courseName = name; //store the course name in the object
    }//end function setCourseName
string GradeBook::getCourseName()
    {
        return courseName; // return the object's courseName
    }
    //function that displays a welcome message to the gradebook user
void GradeBook::displayMessage()
    {
        cout << "Welcome to the Gradebook for\n" << getCourseName() << "!" << endl;
    } //end function displayMessage
