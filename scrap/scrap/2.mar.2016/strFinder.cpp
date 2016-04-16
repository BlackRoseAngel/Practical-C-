/***************************************************************************

* Program: String Finder

* Created: 2.3.16 ; Modified: 2.3.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This program is designed to come up with a function for searching
  for a particular string within a string using a method to which is more
  accurate than just doing a string comparison.

***************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string usrInput;
  string search;
  
  cout << "Please input some words: ";
  getline(cin, usrInput);
  
  cout << "Please input a word to search for: ";
  cin >> search;
  
  for (int x = 0; x < usrInput.length(); x++)
  {
    int y = 0;
    if (usrInput[x] == search[y]) {
      
      y++;
    }
  }
  
  cout << usrInput << endl;
  cout << search << endl;
  

  return(0);
} //end main()
