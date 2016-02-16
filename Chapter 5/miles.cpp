/**************************************************************************

* Program: Miles

* Created: 15.2.16 ; Modified: 15.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is excercise 5-4 from Practical C++
  Write a program that converts kilometers per hour to miles per hour.Write
  miles = (kilometers * 0.6213712)

**************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

const float convert = 0.6213712;

int main()
{
  float kilo;
  
  cout << "Please enter your speed in Kilometers: ";
  cin >> kilo;
  
  float miles = kilo * convert;
  
  cout << "That comes out to be " << setprecision(2) << fixed << miles << " miles per hour." << endl;

  return(0);
} //end main()