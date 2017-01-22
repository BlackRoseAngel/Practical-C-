/**************************************************************************

* Program: Maximum Value

* Created: 1.20.17 ; Modified: 1.21.17

* Version: 0.4

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 9-5 from Practical C++
  Write a function that returns the maximum value of an array of numbers.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int MaxValue(string input, int length);

int main()
{
	string array;

	cout << "Please enter an array: ";
	cin >> array;

	int max = MaxValue(array, array.size());

	cout << max << " is the largest number in " << array << endl;

  return(0);
} //end main()

int MaxValue(string input, int length){
	int max = 0;
	int current;

	for(int x = 0;x < length; x++){
		current = input[x];
		if(current > max)
			max = current;
	}

	return(max - 48);

} //end MaxValue()
