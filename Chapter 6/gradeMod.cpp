/**************************************************************************

* Program: GradeMod

* Created: 16.2.16 ; Modified: 16.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 6-2 from Practical C++
  Modify the previous program to print out a + or - after the letter grade
  based on the last digit of the score. For example, 81=B-, 94=A, and 68=D+.
  Note that an F is only an F; there is no F+ or F-.

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int usrInput;
  char letterGrade;
  int numMod;
  char modifier;
  
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
  
  numMod = usrInput % 10;
  
  if (letterGrade == 'F')
    modifier = ' ';
  else if (numMod > 7)
    modifier = '+';
  else if (numMod < 4)
    modifier = '-';
  else
    modifier = ' ';
  
  cout << "The student has a letter grade of " << letterGrade << modifier << "." << endl;

  return(0);
} //end main()