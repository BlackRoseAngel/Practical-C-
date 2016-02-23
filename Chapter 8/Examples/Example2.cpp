/**************************************************************************

* Program: Total6

* Creator: Brett Chapin(bachapin)

* Purpose: This is Example 8-2 from Practical C++

**************************************************************************/
#include <iostream>

using namespace std;

int total;      // total of all numbers
int current;    // current value from the user
int counter;    // while loop counter

int main()
{
  total = 0; 

  for(counter = 0; counter < 5; counter++) {
    cout << "Number? ";
    cin >> current;
    
    total += current;
  }
  cout << "The grand total is " << total << endl;

  return(0);
} //end main()