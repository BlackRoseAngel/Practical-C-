/**************************************************************************

* Program: Begins

* Created: 1.18.17 ; Modified: 1.18.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 9-2 from Practical C++
  Write a function begins(string1, string2) that returns true if string1
  begins string2. Write a program to test the function.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool begins(string first, string second);

int main()
{
	string input1, input2;

	cout << "Please enter two strings to compare to see if the second string contains the first: ";
	cin >> input1 >> input2;

	if(begins(input1, input2))
		cout << "String: " << input2 << " does contain String: " << input1 << endl;
	else
		cout << "String: " << input2 << " does not contain String: " << input1 << endl;

  return(0);
} //end main()

bool begins(string first, string second) {
	bool doesBegin;

	for(int x = 0; x < first.size(); x++){
		if((x == first.size() - 1) && (tolower(second[x]) == tolower(first[x]))){
			doesBegin = true;
			break;
		}else if(tolower(second[x]) != tolower(first[x])){
			doesBegin = false;
			break;
		} //end if-statement
	} //end for-loop

	return doesBegin;
} //end begins()
