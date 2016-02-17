/**************************************************************************

* Program: Wages

* Created: 16.2.16 ; Modified: 16.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 6-5 from Practical C++
  Write a program that, given the number of hours an employee worked and
  her hourly wage, compute her weekly pay. Count any hours over 40 as over-
  time at time-and-a-half.

**************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

float OverTime(float hours);

int main()
{
  float hours, wage, weeklyIncome;
  
  cout << "How many hours did the employee work? ";
  cin >> hours;
  cout << "How much (per hour) does employee make? ";
  cin >> wage;
  
  if (hours > 40.0) {
    float overTime = OverTime(hours);
    weeklyIncome = (40.0 * wage) + overTime * (wage * 1.5);
    
    cout << "You worked " << setprecision(2) << fixed << overTime << " overtime hours this week." << endl;
  }
  else
    weeklyIncome = hours * wage;
  
  cout << "You worked " << hours << " at $" << wage << " per hour, making $" << weeklyIncome << " this week." << endl;

  return(0);
} //end main()

float OverTime(float hours)
{
  float OThours = hours - 40.0;
  return OThours;
} //end OverTime()