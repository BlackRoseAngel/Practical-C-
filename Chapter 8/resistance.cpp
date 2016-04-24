/**************************************************************************

* Program: Resistance

* Created: 29.2.16 ; Modified: 15.3.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-2 from Practical C++
  Write a program to compute the total resistance for any number of 
  parallel resistors.

**************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b);

int main()
{
  int x, y, hcf, lcm;
  string strX, strY;
  
  cout << "Enter two integers: ";
  cin >> x >> y;
  
  hcf = gcd(x, y);
  lcm = (x*y)/hcf;
  
  strX = to_string(x);
  strY = to_string(y);
  
  cout << "Greatest common divisor of " << strX << " and " << strY << " is " << hcf << endl;
  cout << "Least common multiple of " << strX << " and " << strY << " is " << lcm << endl;

  return(0);
} //end main()

int gcd(int a, int b)
{
  if (b == 0)
    return (a);
  else
    return (gcd(b, a % b));
} //end gcd()
