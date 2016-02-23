/**************************************************************************

* Program: PosNeg

* Created: 22.2.16 ; Modified: 22.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is Exercise 7-6 from Practical C++
  Write a program that takes a series of numbers and counts the number of
  positive and negative values.

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int posNums, negNums, usrInput;
  bool end;
  
  cout << "Enter a series of numbers to calculate how many you enter that are positive or negative.\n"
    "Enter 0 to end the program." << endl;
  
  do {
    cout << "Enter a number: ";
    cin >> usrInput;
    
    if (usrInput > 0)
      posNums ++;
    else if (usrInput < 0)
      negNums ++;
    else
      end = true;
    
  } while(end == false);
  
  cout << "You entered " << posNums << " positive numbers." << endl;
  cout << "You entered " << negNums << " negative numbers." << endl;

  return(0);
} //end main()