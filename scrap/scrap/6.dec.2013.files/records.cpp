/**************************************************************************

* Program: Records

* Created: 12.6.13 ; Modified: 12.6.13

* Version: 1.1

* Creator: Brett Chapin

* Purpose: To create and illustrate the understanding and use of the
  struct data type.

*************************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cctype>
using namespace std;

struct EmpName
{
   int idNum;
   string fName;
   string lName;
} Employee[12];
ifstream inFile;
ofstream outFile;
void readFile();
void writeFile();
void outputStruct();

int main()
{   
   inFile.open("126data.txt");
   outFile.open("EmployeeRecords.txt");

   readFile();
   writeFile();
   outputStruct();

   return(0);
} //end main()

void readFile()
{
   int x = 0;
   while(!(inFile.eof()))
   {
      inFile >> Employee[x].idNum;
      inFile >> Employee[x].fName;
      inFile >> Employee[x].lName;
      x++;
   }
}

void writeFile()
{
   for(int y = 0; y <= 11; y++)
   {
      outFile << Employee[y].idNum << ' ' << Employee[y].fName << ' ' << Employee[y].lName << endl;
   }
}

void outputStruct()
{
   for(int position = 0; position <= 11; position++)
   {
   cout << Employee[position].idNum << ' ' << Employee[position].fName << ' ' << Employee[position].lName << endl;
   }
}
