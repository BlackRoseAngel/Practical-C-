/**************************************************************************

* Program: Ascii

* Created: 1.20.17 ; Modified: 1.20.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 9-4 from Practical C++
  Write a function that will take a character string and return a primitive
  hash code by adding up the value of each character in the string.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int HashCode(string input, int pos, int length);

int main()
{
	string usrInput;

	cout << "Please input a string to find the Primitive Hash: ";
	cin >> usrInput;

	cout << "The hash of " << usrInput << " is " << HashCode(usrInput, 0, usrInput.size()) << endl;

  return(0);
} //end main()

int HashCode(string input, int pos, int length){
	if(pos == length)
		return(int(input[pos]));
	else
		return(int(input[pos]) + HashCode(input,pos + 1,length));

} //end HashCode()
