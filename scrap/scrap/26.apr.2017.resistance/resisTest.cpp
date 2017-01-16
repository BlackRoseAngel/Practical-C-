/**************************************************************************

* Program: Resistance Test

* Created: 26.4.2016 ; Modified: 26.4.2016

* Version: 0.3

* Creator: Brett Chapin(bachapin)

* Purpose: This is a test program to experiment with the end desire for 
  my Practical C++ program from chapter 8, Exercise 2.

**************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b);
int top(int a, int b);

int main()
{
	int x, y, lcm = 0;

	cout << "Please input two integers: ";
	cin >> x >> y;

	lcm = x*y/gcd(x, y);

	cout << "The greatest common denominator between " << x << " and " << y <<
		 " is " << lcm << "." << endl;

	cout << "You have to multiply " << x << " by " << top(x, lcm) << " to get "
		 << lcm << "." << endl;

	cout << "You have to multiply " << y << " by " << top(y, lcm) << " to get "
		 << lcm << "." << endl;


    return(0);
} //end main()

int gcd(int a, int b)
{
     if (b == 0)
		 return(a);
	 else
		 return(gcd(b, a % b));
} //end gcd()

int top(int a, int b)
{
	if (a == b)
		return(1);
	else
		return(b/a);
} //end top()
