/**************************************************************************

* Program: Word Count

* Created: 1.18.17 ; Modified: 1.18.17

* Version: 0.1

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 9-1 from Practical C++
  Write a procedure tht counts the number of words in a string. (Your
  documentation should describe exactly how you define a word.) Write a
  program to test your new procedure.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int words(string input);

int main()
{
	string inputSentence;

	cout << "Please type a sentence of which I'll count the words: " << endl;
	getline(cin, inputSentence);

	/* A word is defined as a string of characters seperated by either a ' '
	   or a '-' */

	cout << "There is " << words(inputSentence) << " word(s) in your sentence." << endl;

  return(0);
} //end main()

int words(string input){
	const char seperators[2] = {' ', '-'};
	int count = 1;

	for(int x = 0; x < input.size(); x++){
		if((input[x] == seperators[0]) || (input[x] == seperators[1]))
			count++;
	}

	return count;
}
