/**************************************************************************

* Program: Vowel

* Created: 1.15.17 ; Modified: 1.15.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-5 from Practical C++
  Write a program that reads a character and prints out whether it is a
  vowel or consonant.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool vowel(char test);

int main()
{
	char input;

	cout << "Please enter a character: ";
	cin >> input;

	if (vowel(input) == true)
		cout << input << " is a vowel." << endl;
	else
		cout << input << " is a consonant." << endl;

  return(0);
} //end main()

bool vowel(char test){
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	bool output = false;

	for(int x = 0; x < 5; x++){
		if (test == vowels[x])
			output = true;
	} //end for-loop

	return output;
} //end vowel()
