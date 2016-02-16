/**************************************************************************

* Program: Change

* Created: 16.2.16 ; Modified: 16.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 6-3 from Practical C++
  Given an amount less than $1.00, compute the number of quarters ($0.25),
  dimes ($0.10), nickels ($0.05), and pennies ($0.01) needed. Use your own
  currency if you want to.

**************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  float usrInput;
  
  cout << "Please input the change needed: ";
  cin >> usrInput;
  
  int change = usrInput * 100;
  int dollars, quarters, dimes, nickels, pennies;
  
  dollars = change / 100;
  change = change - (dollars * 100);
  quarters = change / 25;
  change = change - (quarters * 25);
  dimes = change / 10;
  change = change - (dimes * 10);
  nickels = change / 5;
  change = change - (nickels * 5);
  pennies = change % 5;
  
  cout << "Give the customer " << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;
  
  return(0);
} //end main()