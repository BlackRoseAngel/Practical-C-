/**************************************************************************

* Program: fahrenheit

* Created: 14.2.16 ; Modified: 14.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 5-1 from Practical C++
  Write a program that converts Celsius to Fahrenheit. The formula
  is F = 9/5C + 32.

**************************************************************************/
#include <iostream>

using namespace std;

int usrInput;

int main()
{
  
  cout << "Please input a temperature in Celsius: ";
  cin >> usrInput;
  
  float convert = ((9.0 / 5.0) * usrInput) + 32;
  
  cout << usrInput << "  degrees Celsius is " << convert << " degrees Fahrenheit." << endl;

  return(0);
} //end main()

