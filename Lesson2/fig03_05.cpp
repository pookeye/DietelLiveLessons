//
//  main.cpp
//  Lesson2Dietel
//
//  Created by Daniel Chan on 1/4/15.
//  Copyright (c) 2015 Pookeye Inc. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

//GradeBook Class Definition
class GradeBook
{
public:
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
    }//end function displayMessage
private:
    string courseName;
//end class GradeBook
};

int main() {
    // insert code here...
    string nameOfCourse; //string of characters stored as name of course
    GradeBook myGradeBook; //Create a GradeBook Object
    //display initial name in memory
    cout << "Initil course name is: " << myGradeBook.getCourseName() << endl;
    
    //prompt for input
    cout << "Please enter the course name:" << endl;
    getline( cin, nameOfCourse); //read in the course name with blanks
    myGradeBook.setCourseName( nameOfCourse ); //set the course name
    cout << endl;
    
    myGradeBook.displayMessage(); //call the objects displayMessage Function
    
 
    
    return 0;
}
