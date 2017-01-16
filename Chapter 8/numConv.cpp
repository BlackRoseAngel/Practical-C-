/**************************************************************************

* Program: Number Converter

* Created: 1.16.17 ; Modified: 1.16.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-6 from Practical C++
  Write a program that converts numbers to words. Example: 895 results in
  "eight nine five."

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string Number(char input);

int main()
{
	int input;

	cout << "Please enter an integer: ";
	cin >> input;

	string convertedInput = to_string(input);

	for(int x; x < convertedInput.size(); x++){
		cout << Number(convertedInput[x]) << " ";
	}

	cout << "\n";

  return(0);
} //end main()

string Number(char input) {

	switch(input) {
		case '1': return ("one");
		case '2': return ("two");
		case '3': return ("three");
		case '4': return ("four");
		case '5': return ("five");
		case '6': return ("six");
		case '7': return ("seven");
		case '8': return ("eight");
		case '9': return ("nine");
		case '0': return ("zero");
	}

} //end Number()
