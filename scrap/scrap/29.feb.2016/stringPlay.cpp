/**************************************************************************

* Program: String Play

* Created: 29.2.16 ; Modified: 29.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is a program to play with the functions and abilities of
  strings.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  
  string name;
  int charNum = 0;
  int spaceNum = 0;
  int upperCase = 0;
  int lowerCase = 0;
  
  cout << "Please enter your name: ";
  getline(cin, name);
  
  for (int x = 0; x < name.length(); x++){
    //1-if Checks to see how many spaces and characters are in the string
    if(name[x] == ' ')
      spaceNum++;
    else if (name[x] != ' ')
      charNum++;
    
    //2-if Checks to see how many characters are lower and upper-case
    if(isupper(name[x]))
      upperCase++;
    else
      lowerCase++;
    
  }
  
  lowerCase -= spaceNum;
  
  cout << "Your name is: " << name.length() << " characters long, " << name << endl;
  cout << "The name you entered has " << charNum << " character(s) in it, and " << spaceNum << " space(s) in it." << endl;
  cout << "There are " << upperCase << " upper-case letters, and " << lowerCase << " lower-case." << endl;

  return(0);
} //end main()