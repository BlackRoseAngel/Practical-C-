/**************************************************************************

* Program: Count

* Created: 1.18.17 ; Modified: 1.19.17

* Version: 0.4

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 9-3 from Practical C++
  Write a function count(number, array, length) that will count the number
  of times number appears in array. The array has length elements. The
  function should be recursive. Write a test program to go with the
  function.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int count(int number, string input, int length);
int numCount;
int pos = 0;

int main()
{
	string usrInput;
	int searchNum;
	int returnNum;
	int position = 0;

	cout << "Please input a string of numbers: ";
	cin >> usrInput;
	cout << "Please input an integer to search for: ";
	cin >> searchNum;

	returnNum = count(searchNum, usrInput, usrInput.size());

	cout << "There were " << returnNum << ", " << searchNum << " in " << usrInput << endl;

  return(0);
} //end main()

int count(int number, string input, int length){

	string check = to_string(number);
	char chrNum = check[0];

	if(pos == length){
		return(0);
		cout << pos << endl;
	}else{
		if(input[pos] == chrNum){
			pos++;
			return(1 + count(number,input,length));
		}else{
			pos++;
			return(0 + count(number,input,length));
		}
	}
} //end count()
