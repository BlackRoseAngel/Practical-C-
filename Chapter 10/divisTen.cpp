/**************************************************************************

* Program: divisTen

* Created: 1.28.17 ; Modified: 1.28.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 10-2 from Practical C++
  Write a macro that returns true if its parameter is divisble by 10 and
  false otherwise.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define DIVISIBLE(x) ((x % 10) == 0)

int main()
{
	int usrInput;

	cout << "Please input an integer: ";
	cin >> usrInput;

	if(DIVISIBLE(usrInput))
		cout << usrInput << " is divisible by 10." << endl;
	else
		cout << usrInput << " is not divisble by 10." << endl;

  return(0);
} //end main()
