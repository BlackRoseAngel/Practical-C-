/**************************************************************************

* Program: Serial

* Created: 20.2.16 ; Modified: 20.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 7-3 from Practical C++
  A serial transmission line can transmit 960 bytes per second. Write a
  program that will calculate how long it will take to send a file, given the
  file’s size. Try it on a 400MB (419,430,400 byte) file. Use appropriate
  units. (A 400MB file takes days.)

**************************************************************************/
#include <iostream>

using namespace std;

const int transRate = 960;

int transTime(int size, string type);

int main()
{
  int dataSize;
  int timeSec;
  string dataType;
  
  cout << "Please enter the data you would like the calculation performed on (using this format ### DS): ";
  cin >> dataSize >> dataType;
  
  timeSec = transTime(dataSize, dataType);
  
  int time[4];
  
  time[0] = timeSec % 60;
  cout << time[0] << " seconds." << endl;
  time[1] = timeSec / 60;
  time[2] = time[1] / 60;
  time[3] = time[2] / 24;
  cout << time[3] << " days." << endl;
  
  time[1] = time[1] % 60;
  cout << time[1] << " minutes." << endl;
  time[2] = time[2] % 24;
  cout << time[2] << " hours." << endl;

  return(0);
} //end main()

int transTime(int size, string type)
{
  char T = type[0];
  int temp;
  
  switch (T)
  {
    case 'B' :
      cout << T << endl;
      return(size / transRate);
      break;
    case 'K' :
      cout << T << endl;
      temp = size * 1024;
      cout << temp << endl;
      return(temp / transRate);
      break;
    case 'M' :
      cout << T << endl;
      temp = size * 1048576;
      cout << temp << endl;
      return(temp / transRate);
    case 'G' :
      cout << T << endl;
      temp = size * 1073741824;
      cout << temp << endl;
      return(temp / transRate);
      break;
    defualt :
      break;
      
  }  
  
} //end transTime()