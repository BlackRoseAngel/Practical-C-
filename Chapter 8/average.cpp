/**************************************************************************

* Program: Average

* Created: 25.2.16 ; Modified: 25.2.16

* Version: 1.3

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-3 from Practical C++
  Write a program to average n numbers.

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int input, runTotal, output, count;
  bool stop = false;
  
  count = 0;
  runTotal = 0;
  output = 0;
  
  cout << "This program will average a range of numbers." << endl;
  cout << "Please enter 0 to quit." << endl;
  
  do {
    cout << "Number? ";
    cin >> input;
    
    if (input != 0)
      runTotal += input;
    else
      stop = true;
    
    count++;
    
  } while(stop == false);
  
  output = runTotal / (count - 1);
  
  cout << "You entered " << (count - 1) << " numbers, that average to " << output << endl;

  return(0);
} //end main()
