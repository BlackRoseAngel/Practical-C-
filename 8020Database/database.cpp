/**************************************************************************

* Program: Work Database

* Created: 25.5.2015

* Version: 0.1

* Last Modified: 31.5.2015

* Creator: Brett Chapin

* Purpose: This program is an original creation and was not commissioned
  by 80/20 Inc. or anyone working therein. This is sole property of Brett
  Chapin and used privately as such. All information collected from 80/20
  Inc. will not be disclosed or used publicly, and therefore safe from
  general populus access. This program is used to take in a set of data
  involving orders ran at 80/20 Inc. over the course of a shift and
  determine the average amount of time is required to complete an order,
  a particular part number, and how many parts I am running an hour.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <fstream>

using namespace std;

struct myRecord
{
   string dateDone;
   string dateDue;
   int partNum;
   int orderNum;
   string machine;
   int partsRan;
   int timeMin;
} workOrder;

ofstream outFile;
void writeFile(struct sampleData *order);
void getData();
void readData();
void clearScreen();

int main()
{
   outFile.open("log.info");

   char opt;

   do //Menu
   {
      bool outStatement = false;

      clearScreen();
      cout << "0. Quit\n";
      cout << "1. Input Data\n";
      cout << "2. Read Data\n";

      cout << "Please enter your selection: ";
      cin >> opt;

      switch(opt)
      {
	 case '0':{
            clearScreen();
            outStatement = true;
	    break;
		  }
         case '1':{
            clearScreen();
            cout << "Hello World!" << endl;
	    outStatement = true;
	    break;
		  }
	 case '2':{
	    clearScreen();
	    cout << "I love to program!" << endl;
	    outStatement = true;
	    break;
		  }
      } //end switch statement

      if(outStatement == false){
	 clearScreen();
	 cout << "Invalid entry, try again!" << endl;
      }

   }while(opt != '0'); //end while loop - Menu


   return(0);
} //end main()

void writeFile(struct sampledata *order)
{
   
} //end writeFile()

void clearScreen()
{
   int n = 0;
   for(n = 0; n < 10; n++)
      cout << "\n\n\n\n\n\n\n\n\n\n";
} //end clearScreen()
