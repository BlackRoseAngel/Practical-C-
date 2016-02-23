/**************************************************************************

* Program: Primes

* Created: 22.2.16 ; Modified: 22.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is Exercise 7-5 from Practical C++
  Write a program to tell whether a number is prime.

**************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

bool primeTest(int num);

int main()
{
  int usrInput;
  
  cout << "Please enter a number to test to see if its a prime: ";
  cin >> usrInput;
  
  if (primeTest(usrInput) == true)
    cout << usrInput << " is a prime number." << endl;
  else
    cout << usrInput << " is not a prime number." << endl;

  return(0);
} //end main()

bool primeTest(int num)
{
  int remain;
  bool test;
  
  if (num < 3)
    test = true;
  else {
    for(int x = 2; x < num; x++)
    {
      remain = num % x;
    
      if (remain == 0) {
        test = false;
        break;
      } else {
        test = true;
      }
    } //for loop
  }
  
  return(test);
} //end primeTest()