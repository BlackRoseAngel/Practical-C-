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
#include <time.h>

using namespace std;

bool vowel(char test);

int main()
{
	int start = clock();
	char input;

	cout << "Please enter a lowercase character: ";
	cin >> input;

	if (input == 'y')
		cout << input << " is sometimes a vowel." << endl;
	else if (vowel(input) == true)
		cout << input << " is a vowel." << endl;
	else
		cout << input << " is a consonant." << endl;

	int end = clock();
	cout << "Execution took " << ((float)end - start)/CLOCKS_PER_SEC << " seconds." << endl;

  return(0);
} //end main()

bool vowel(char test){
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	bool output = false;

	for(int x = 0; x < 5; x++){
		if (test == vowels[x]){
			output = true;
			break;
		} //end if-statement
	} //end for-loop

	return output;
} //end vowel()
