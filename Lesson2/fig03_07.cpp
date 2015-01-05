//Constructor Example
//this is basically a special method to initialize the class Member automatically at the time it was created


#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;


//GradeBook Class Definition
class GradeBook
{
public:
    //constructor initializes courseName with string supplied as argument
    //not allowed to be int or void or anything. Name of Class verbatim.
    GradeBook ( string name)
    {
        //good practice to use its own class functions
        setCourseName(name); //call set function to initiliaze the courseName
    }//end GradeBook Constructor
    
    //function to set the course's name
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
    
    //create two GradeBook obects
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );
    
    //display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
 
    
    return 0;
}
