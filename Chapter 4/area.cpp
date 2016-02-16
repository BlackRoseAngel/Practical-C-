/**************************************************************************

* Program: Area

* Created: 12.2.16 ; Modified: 14.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is excercise 4-3 from Practical C++
  Write a program to compute the area and perimeter of a rectangle 3 inches
  wide by 5 inches long. What changes must be made to the program so it
  works for a rectangle 6.8 inches wide by 2.3 inches long?

**************************************************************************/
#include <iostream>

using namespace std;

int width = 3;
int length = 5;

int main()
{
  int area = width * length;
  int perimeter = (width + length) * 2;
  
  cout << "The area of the rectangle is " << area << endl;
  cout << "The perimeter of the rectangle is " << perimeter << endl;

   return(0);
} //end main()