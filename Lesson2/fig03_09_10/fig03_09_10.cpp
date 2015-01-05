//change name to main.cpp

//
//  main.cpp
//  Lesson2Dietel
//
//  Created by Daniel Chan on 1/4/15.
//  Copyright (c) 2015 Pookeye Inc. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" //include definition of class GradeBook



int main() {
    // insert code here...
    
    //create two GradeBook obects
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );
    
    //display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
 
    
    return 0;
} //end main
