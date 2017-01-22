/**************************************************************************

* Program: Char Replace

* Created: 1.21.17 ; Modified: 1.21.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 9-6 from Practical C++
  Write a function that scans a string for the character '-' and replaces
  it with '_'.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string CharReplacement(string input, int length);

int main()
{
	string usrInput;

	cout << "Please write a string to replace '-': ";
	getline(cin, usrInput);
	cout << usrInput << endl;

	cout << "Your string has become, " << CharReplacement(usrInput, usrInput.size()) << endl;

  return(0);
} //end main()

string CharReplacement(string input, int length){

	string changed = input;

	for(int x = 0;x < length;x++){
		if(changed[x] == '-')
			changed[x] = '_';
	}

	return(changed);
} //end CharReplacement()
