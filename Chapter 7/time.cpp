/**************************************************************************

* Program: Time

* Created: 16.2.16 ; Modified: 19.2.16

* Version: 1.15

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 7-2 from Practical C++
  Write a program to perform date arithmetic, such as how many days there
  are between 6/6/90 and 8/8/92. Include a specification and a code design.

**************************************************************************/
#include <iostream>

using namespace std;

const string monthName[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
const int normYear = 365;
const int leapYear = 366;
int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool checkLeap(int year);
int yearLoop(int firstYear, int secYear);

int main()
{
  int firstDate[3];
  int secDate[3];
  bool temp = false;
  int dayCount = 0;
  
  // Read in First Date
  while (temp == false)
  {
    cout << "Please enter the first date (following this format: MM DD YYYY): ";
    cin >> firstDate[0] >> firstDate[1] >> firstDate[2];
    
    // Checking if the year is a leap year, changes Febrary days accordingly
    if (checkLeap(firstDate[2]) == true)
      monthDays[1] = 29;
    
    //1-if Checks to make sure its a valid month entry
    if ((firstDate[0] > 12) || (firstDate[0] < 1)) {
      cout << "Sorry, that is an invalid month." << endl;
      temp = false;
    } else {
      //2-if Checks to make sure the number of days are valid for the month
      if ((firstDate[1] > monthDays[firstDate[0] - 1]) || (firstDate[1] < 1)) {
        cout << monthName[firstDate[0] - 1] << " does not contain " << firstDate[1] << " days in it." << endl;
        temp = false;
      } else {
        //3-if Checks to make sure the year is a valid entry
        if (firstDate[2] < 1) {
          cout << "You can not have a negative year." << endl;
          temp = false;
        } else {
          temp = true;
        } //end 3-if
      } //end 2-if
    } //end 1-if
  } //end while(firstDate)
  
  temp = false;
  if (monthDays[1] != 28)
    monthDays[1] = 28;
  
  // Read in Second Date
  while (temp == false)
  {
    cout << "Please enter the date to compare: ";
    cin >> secDate[0] >> secDate[1] >> secDate[2];
    
    if (checkLeap(secDate[2]) == true)
      monthDays[1] = 29;
    
    //1-if Checks to make sure its not the same date
    if ((secDate[0] == firstDate[0]) && (secDate[1] == firstDate[1]) && (secDate[2] == firstDate[2]))
      cout << "The dates can not be the same." << endl;
    else {
      //2-if Checks to make sure the year is valid
      if (secDate[2] < 1){
        cout << secDate[2] << " is an invalid year." << endl;
      } else if (secDate[2] < firstDate[2]) {
        cout << "You can not pick a date before your first entry." << endl;
      } else {
        //3-if Checks to make sure month is a valid entry
        if ((secDate[0] > 12) || (secDate[0] < 0))
          cout << "Sorry, that is an invalid month." << endl;
        else if ((secDate[2] == firstDate[2]) && (secDate[0] < firstDate[0]))
          cout << "You can not pick a date before your first entry." << endl;
        else {
          //4-if Checks to make sure the day entry is valid
          if ((secDate[1] > monthDays[secDate[0] - 1]) || (secDate[1] < 1)) 
            cout << monthName[secDate[0] - 1] << " does not contain " << secDate[1] << " days in it." << endl;
          else if ((secDate[2] == firstDate[2]) && (secDate[0] == firstDate[0]) && (secDate[1] < firstDate[1]))
            cout << "You can not pick a date before your first entry." << endl;
          else {
            temp = true;
          } //end 4-if  
        } //end 3-if
      } //end 2-if
    } //end 1-if
  } //end while(secDate)
  
  if (monthDays[1] != 28)
    monthDays[1] = 28;
  
  //1-if Checks to see if its the same year, and month and calculates difference between days.
  if ((secDate[2] == firstDate[2]) && (secDate[0] == firstDate[0]) && (secDate[1] > firstDate[1])){
    dayCount = secDate[1] - firstDate[1];
  } else if ((secDate[2] == firstDate[2]) && (secDate[0] != firstDate[0])) {
    //2-if Checks to see if there needs to be a leap day
    if ((firstDate[0] < 3) && (checkLeap(firstDate[2])))
      monthDays[1] = 29;
    
    //Looping through the months between firstDate and secDate
    for (int x = firstDate[0]; x < (secDate[0] - 1); x++)
      dayCount += monthDays[x];

    dayCount += secDate[1] + (monthDays[firstDate[0] - 1] - firstDate[1]);
    
  } else {
    
    if ((firstDate[0] < 3) && (checkLeap(firstDate[2])))
      monthDays[1] = 29;
    
    //Adds the days between firstMonth through the end of the year to dayCount
    for (int x = firstDate[0]; x < 12; x++)
      dayCount += monthDays[x];
    
    dayCount += monthDays[firstDate[0] - 1] - firstDate[1];
    
    monthDays[1] = 28;
    
    //Adds the days before secondMonth to dayCount
    if ((secDate[0] > 2) && (checkLeap(secDate[2])))
      monthDays[1] = 29;
    
    for (int x = secDate[0] - 1; x > 0; x--)
      dayCount += monthDays[x];
    
    dayCount += secDate[1];
    
    //Calculates the days of the years between and adds them to dayCount
    if (secDate[2] - 1 > firstDate[2])
    dayCount += yearLoop(firstDate[2],secDate[2]);
    
  } //end 1-if

  cout << "There is " << dayCount << " day(s) between " << monthName[firstDate[0] - 1] << " " << firstDate[1] << ", " << firstDate[2] << " and " << monthName[secDate[0] - 1] << " " << secDate[1] << ", " << secDate[2] << endl;
  
  //cout << "There are " << (secDate[2] - firstDate[2]) << " years between " << firstDate[2] << " and " << secDate[2] << "." << endl;
  
  return(0);
} //end main()

bool checkLeap(int year)
{
  
     if(((year % 4) == 0) && !((year % 100) == 0))
      return(true);
   else if ((year % 400) == 0)
      return(true);
   else
      return(false);
  
} //end checkLeap()

int yearLoop(int firstYear, int secYear)
{
  int count = 0;
  
  for (int x = firstYear + 1; x < secYear; x++) {
    if (checkLeap(x) == true)
      count += leapYear;
    else
      count += normYear;
  }
  
  return(count);
} //end yearLoop()