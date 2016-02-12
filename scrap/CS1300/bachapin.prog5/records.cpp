/**************************************************************************

* Program: Files & Records

* Created: 12.10.13 ; Modified: 12.10.13

* Due Date: 12.18.13

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This program will take in two input files, both of which being
  full of data. The first file will have four inputs: ID Numbers, First
  Names, Last Names, and Hourly Rates. The second file will contain: ID
  Numbers, and Hours Worked. Then after doing calculations for gross pay
  the program will output the results in an ordered fashion on the screen
  and then save them to an output file.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

struct employee{
   int idNum;
   string fName;
   string lName;
   float rate;
   float hours;
};
employee Workers[101];
float pay;
ifstream EmployeeInput;
ifstream HourInput;
ofstream employeeRecord;

int main()
{
   EmployeeInput.open("employees.txt");
   HourInput.open("hours.txt");
   employeeRecord.open("output.txt");

   return(0);
} //end main()
