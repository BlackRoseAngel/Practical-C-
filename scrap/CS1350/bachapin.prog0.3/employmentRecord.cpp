/**************************************************************************

* Program: Practice0.3 - employmentRecord

* Created: 2.3.13 ; Modified: 2.5.13

* Due Date: 2.5.13

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This program is a practice program for CS1350 to demonstrate our
  knowledge of structs and reading in files.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int recordElements;
ifstream inFile;
struct empRec
{
   int social;
   string name;
   string job;
};
empRec Emp[100];
int readFile();
void sortData(int elements);
void swap(int pos1, int pos2);

int main()
{

   return(0);
} //end main()

int readFile()
{
   int x = 0;

   while(!(inFile.eof()))
   {
      inFile >> Emp[x].name;
      inFile >> Emp[x].social;
      inFile >> Emp[x].job;
      x++;
   }

   return(x);
} //end readFile()

void sortData(int elements)
{
   int pass = 1;
   int aryLnth = elements - pass;

   for(int x = 0; x < elements; x++){
      for(int y = 0; y <= aryLnth; y++){
	 if(Emp[y].social > Emp[y+1].social)
	    swap(y,y+1);
      }
      pass += 1;
   }

} //end sortData()

void swap(int pos1, int pos2)
{
   struct Rec{
      int soc;
      string name;
      string title;
   } tmp;

   //This block moves the Employee's Social from pos2 to pos1
   tmp.soc = Emp[pos1].social;
   Emp[pos1].social = Emp[pos2].social;
   Emp[pos2].social = tmp.soc;
   //This block moves the Employee's Name from pos2 to pos1
   tmp.name = Emp[pos1].name;
   Emp[pos1].name = Emp[pos2].name;
   Emp[pos2].name = tmp.name;
   //This block moves the Employee's Job from pos2 to pos1
   tmp.title = Emp[pos1].job;
   Emp[pos1].job = Emp[pos2].job;
   Emp[pos2].job = tmp.title;

} //end swap()
