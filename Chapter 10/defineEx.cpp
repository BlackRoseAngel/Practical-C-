/**************************************************************************

* Program: defineEx

* Created: 1.23.17 ; Modified: 1.23.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 10-1 from Practical C++
  Create a set of macros to define a type called RETURN_STATUS and the
  following values: RETURN_SUCCESS, RETURN_WARNING, and RETURN_ERROR.
  Define a macro, CHECK_RETURN_FATAL,,, that takes a RETURN_STATUS as its
  argument and returns true if you have a fatal error.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define RETURN_SUCCESS false
#define RETURN_WARNING false
#define RETURN_ERROR true
#define CHECK_RETURN_FATAL(RETURN_STATUS) RETURN_STATUS

int main()
{

	bool error = false;
	int option = 0;

	do{
		cout << "1. Success" << endl;
		cout << "2. Warning" << endl;
		cout << "3. Error" << endl;
		cout << "Please select an option: ";
		cin >> option;

		switch(option) {
			case 1: error = CHECK_RETURN_FATAL(RETURN_SUCCESS);
					cout << "RETURN_SUCCESS" << endl;
				   	break;
			case 2: error = CHECK_RETURN_FATAL(RETURN_WARNING);
				   	cout << "RETURN_WARNING" << endl;
					break;
			case 3: error = CHECK_RETURN_FATAL(RETURN_ERROR);
				   	cout << "RETURN_ERROR" << endl;
					break;
			default: error = true; break;
		}

	} while(error == false);

  return(0);
} //end main()
