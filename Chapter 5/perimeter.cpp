/**************************************************************************

* Program: Perimeter

* Created: 15.2.16 ; Modifier: 15.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is excercise 5-3 from Practical C++
  Write a program to print out the perimeter of a rectangle given its
  and width. Perimeter = 2 * (width + length)

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  float width;
  float length;
  
  cout << "Please input the width of the rectangle: ";
  cin >> width;
  cout << "Please input the length of the rectangle: ";
  cin >> length;
  
  float perimeter = (width + length) * 2;
  
  cout << "The perimeter of the rectangle is " << perimeter << endl;

  return(0);
} //end main()