/**************************************************************************

* Program: Variables

* Created: 12.2.16 ; Modified: 12.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is Exercise 4-1 from Practical C++
  Write a program to print your name, Social Security number, and date of
  birth.

**************************************************************************/
#include <iostream>

using namespace std;

string firstName = "Brett";
string lastName = "Chapin";
string socNum = "***-**-****";
string DoB = "17.10.1989";

int main()
{
  cout << "My name is " + firstName + " " + lastName + "!" << endl;
  cout << "My social security number is " + socNum + "!" << endl;
  cout << "My birthday is " + DoB + "!" << endl;
  
  return(0);
} //end main()

