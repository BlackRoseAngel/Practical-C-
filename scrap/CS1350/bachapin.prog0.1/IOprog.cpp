/**************************************************************************

* Program: Practice 0.1

* Created: 1.25.14 ; Modified: 1.25.14

* Due Date: 1.29.14

* Version: 1.1

* Creator: Brett Chapin(bachapin)

* Purpose: Takes the input of a users name, outputs it on the screen.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

string name;

int main()
{
   //prompts user for input, stores input.
   cout << "Please input your name: ";
   cin >> name;

   //ouputs variable name.
   cout << name << endl;

   return(0);
} //end main()
