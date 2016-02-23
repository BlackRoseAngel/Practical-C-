/**************************************************************************

* Program: Total6

* Creator: Brett Chapin(bachapin)

* Purpose: This is Example 8-1 from Practical C++

**************************************************************************/
#include <iostream>

using namespace std;

int total;      // total of all numbers
int current;    // current value from the user
int counter;    // while loop counter

int main()
{
  total = 0; 
  counter = 0;
  
  while (counter < 5) {
    cout << "Number? ";
    cin >> current;
    total += current;
    
    counter ++;
  }
  cout << "The grand total is " << total << endl;

  return(0);
} //end main()