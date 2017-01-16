/**************************************************************************

* Program: Multiplication Table

* Created: 5.2.16 ; Modified: 1.15.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-4 from Practical C++
  Write a program to print out the multiplication table.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string output(int multiplier, int columns);

int main()
{
	for(int x = 1; x < 10; x++){
		for(int y = 1; y < 10; y++){
			if(y == 1)
				cout << output(x,y);
			else if (y > 1)
				cout << "   " << output(x,y);
		} //end nested for-loop
		cout << "\n";
	} //end for-loop

	return(0);
} //end main()

string output(int multiplier, int columns)
{
	string returnValue;
	int value = multiplier * columns;

	if (value < 10)
		returnValue = " " + to_string(value);
	else
		returnValue = to_string(value);

	return returnValue;
} //end output()
