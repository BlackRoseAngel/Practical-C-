/**************************************************************************

* Program: Grades

* Created: 16.2.16 ; Modified: 16.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 6-1 from Practical C++
  Write a program that accepts a numeric grade and displays the
  corresponding letter grade.

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int usrInput;
  char letterGrade;
  
  cout << "Please enter the percentage the student recieved: ";
  cin >> usrInput;
  
  if (usrInput > 90)
    letterGrade = 'A';
  else if (usrInput > 80)
    letterGrade = 'B';
  else if (usrInput > 70)
    letterGrade = 'C';
  else if (usrInput > 60)
    letterGrade = 'D';
  else
    letterGrade = 'F';
  
  cout << "The student has a letter grade of " << letterGrade << "." << endl;

  return(0);
} //end main()