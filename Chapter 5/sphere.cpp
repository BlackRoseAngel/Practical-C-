/**************************************************************************

* Program: Sphere

* Created: 15.2.16 ; Modified: 15.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is excercise 5-2 from Practical C++
  Write a program to calculate the volume of a sphere, 3/4piR^3.

**************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float usrInput;
  
  cout << "Please input the radius of the sphere: ";
  cin >> usrInput;
  
  int input = pow(usrInput, 3.0);
  float volume = ((4.0/3.0 * 3.14) * input);
  
  cout << "The volume of your sphere is: " << volume << endl;

  return(0);
} //end main()