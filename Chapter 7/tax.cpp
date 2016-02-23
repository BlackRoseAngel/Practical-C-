/**************************************************************************

* Program: Tax

* Created: 22.2.16 ; Modified: 22.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 7-4 from Practical C++
  Write a program to add an 8% sales tax to a given amount and round the
  result to the nearest penny.


**************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

float salesTax(float total);

int main()
{
  float usrInput;
  
  cout << "Please input the total of your purchase: ";
  cin >> usrInput;
  
  cout << "Your total with 8% tax: $" << setprecision(2) << fixed << salesTax(usrInput) << endl;

  return(0);
} //end main()

float salesTax(float subTotal)
{
  float total;
  
  total = subTotal * 1.08;
  
  return(total);
} //end salesTax