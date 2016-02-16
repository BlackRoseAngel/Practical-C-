/**************************************************************************

* Program: Minutes

* Created: 15.2.16 ; Modified: 15.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 5-5 from Practical C++
  Write a program that takes hours and minutes as inputs and outputs the
  total number of minutes (e.g, 1 hour 30 minutes = 90 minutes)

**************************************************************************/
#include <iostream>

using namespace std;

const int convert = 60;

int main()
{
  int usrHour;
  int usrMin;
  int outMin;
  
  cout << "Please enter hour many hours you would like converted: ";
  cin >> usrHour;
  cout << "Please enter the number of minutes you would like converted: ";
  cin >> usrMin;
  
  outMin = (usrHour * convert) + usrMin;
  
  cout << usrHour << " Hour(s) and " << usrMin << " Minute(s) equals " << outMin << " total minutes." << endl;

  return(0);
} //end main()