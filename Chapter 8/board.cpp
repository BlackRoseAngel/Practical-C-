/**************************************************************************

* Program: Board

* Created: 22.2.16 ; Modified: 22.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is Exercise 8-1 from Practical C++
  Print a checkerboard (8-by-8 grid). Each square should be 5-by-3 
  characters wide.

**************************************************************************/
#include <iostream>

using namespace std;

const string row = "+-----+-----+-----+-----+-----+-----+-----+-----+";
const string column = "|     |     |     |     |     |     |     |     |";

int main()
{
  
  for(int y = 1; y < 41; y++) {
    int remain;
    remain = y % 5;
    
    if ((y == 1) || (remain == 0))
      cout << row << endl;
    else
      cout << column << endl;
  }

  return(0);
} //end main()