/**************************************************************************

* Program: Leap

* Created: 16.2.16 ; Modified: 16.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 6-4 from Practical C++
  A leap year is any given year divisible by 4 unless it is divisible by
  100, but not 400. Write a program to tell whether a year is a leap year.

**************************************************************************/
#include <iostream>

using namespace std;

bool IfLeapYear(int yr);

int main()
{
  int usrInput;
  
  cout << "Please input a year: ";
  cin >> usrInput;
  
  if (IfLeapYear(usrInput))
    cout << usrInput << " is a leap year." << endl;
  else
    cout << usrInput << " is not a leap year." << endl;

  return(0);
} //end main()

bool IfLeapYear(int yr)
{

   if(((yr % 4) == 0) && !((yr % 100) == 0))
      return(true);
   else if ((yr % 400) == 0)
      return(true);
   else
      return(false);

} //end IfLeapYear()
