/**************************************************************************

* Program: Letter "E"

* Created: 12.2.16 ; Modified: 12.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This program is Exercise 4-2 from Practical C++
  Write a program to print a block E using asterisks (*), where the E is
  7 characters high and 5 characters wide.

**************************************************************************/
#include <iostream>

using namespace std;

string row1 = "   *****\n";
string row2 = "   *\n";
string row3 = "   *\n";
string row4 = "   *****\n";
string row5 = "   *\n";
string row6 = "   *\n";
string row7 = "   *****\n";

int main()
{
  
  cout << row1;
  cout << row2;
  cout << row3;
  cout << row4;
  cout << row5;
  cout << row6;
  cout << row7;

  return(0);
} //end main()
