/**************************************************************************

* Program: Hours

* Created: 15.2.16 ; Modified: 15.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 5-6 from Practical C++
  

**************************************************************************/
#include <iostream>

using namespace std;

const int convert = 60;

int main()
{
  int usrMin;
  int outMin;
  int outHours;
  
  cout << "Please enter the number of minutes you would like converted: ";
  cin >> usrMin;
  
  outHours = usrMin / convert;
  outMin = usrMin % convert;
  
  cout << usrMin << " Minutes is equal to " << outHours << " Hour(s) and " << outMin << " Minute(s)." << endl;

  return(0);
} //end main()