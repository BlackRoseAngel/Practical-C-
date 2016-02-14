/**************************************************************************

* Program: HELLO

* Created: 14.2.16 ; Modified: 14.2.16

* Version: 0.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is excercise 4-4 from Practical C++
  Write a program to print "HELLO" in big block letters where each
  letter is 7 characters high and 5 characters wide.

**************************************************************************/
#include <iostream>

using namespace std;

string row1 = "*   *  *****  *      *        *\n";
string row2 = "*   *  *      *      *      *   *\n";
string row3 = "*****  *****  *      *      *   *\n";
string row4 = "*   *  *****  *****  *****    *\n";

int main()
{
  
  cout << row1 << row2 << row2 << row3 << row2 << row2 << row4;

   return(0);
} //end main()

