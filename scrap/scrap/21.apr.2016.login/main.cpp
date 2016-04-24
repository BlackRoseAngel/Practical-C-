/**************************************************************************

* Program: Login Test

* Created: 21.4.2016 ; Modified: 21.4.2016

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is merely a test on being able to turn password characters
  into '*' while typing them out.

**************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	char input = ' ';
	string passWord;

	cout << "Please input password: ";

	while (input != 13)
	{
		input = getchar();

		if (input != 13)
		{
			passWord += input;
			cout << '*';
		}
	}

	if (passWord == "helloWorld")
		cout << "Correct Password!" << endl;
	else
		cout << "Incorrect Password!" << endl;

	return(0);
} //end main()
