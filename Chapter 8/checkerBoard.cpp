/**************************************************************************

* Program: Checker Board

* Created: 22.2.16 ; Modified: 22.2.16

* Version: 1.4

* Creator: Brett Chapin(bachapin)

* Purpose: This is a modified, and improved upon version of Exercise 8-1
  making it slightly more effecient.

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int remain[2];
  
  // 1-for to loop through the rows
  for(int x = 1; x < 41; x++) {
    remain[0] = x % 5;
    
    // 2-for to loop through the columns
    for(int y = 1; y < 57; y++) {
      remain[1] = y % 7;
      
      // 1-if to determine the character to place;
      if((x == 1) || (remain[0] == 0)) {
        if((y == 1) || (remain[1] == 0))
          cout << '+';
        else 
          cout << '-';
      } else if ((x != 1) || (remain[0] != 0)) {
        if((y == 1) || (remain[1] == 0))
          cout << '|';
        else
          cout << ' ';
      } //end 1-if
      
    } //end 2-for
    
    cout << '\n';
  } //end 1-for

  return(0);
} //end main()