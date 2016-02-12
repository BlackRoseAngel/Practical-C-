/**************************************************************************

* Program: funtimes

* Created: 11.21.13 ; Modified: 11.21.13

* Due Date: 11.22.13

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This program will read in a file named data.txt which contains
  196 integers, and put them into an array.

**************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

ifstream dataFile;
int elements[196];
void rangeOP(int startpt, int endpt);
void reverseOrder();
void sumArray();
float arrayMean(int array[]);
float standardDeviation(int array[],float mean);

int main()
{
   int userInput1, userInput2;
   float casting;
   dataFile.open("data.txt");

   for(int x = 0; x <= 195; x++)
   {
      dataFile >> casting;
      elements[x] = int(casting);
   }

   cout << "The array has 196 elements, in which start at 0 and run to 195, use this for your range!" << endl;
   cout << "Please enter the beginning of where you would like the array to print: ";
   cin >> userInput1;
   cout << "Please enter the end of where you would like the array to print: ";
   cin >> userInput2;

   rangeOP(userInput1, userInput2);
   reverseOrder();
   sumArray();
   cout << arrayMean(elements) << endl;
   cout << "The standard deviation of the array is " << standardDeviation(elements, arrayMean(elements)) << endl;

   cout << arrayMean(elements) << endl;

   dataFile.close();
   return(0);
} //end main()

void rangeOP(int startpt, int endpt)
{

   for(int x = startpt; x <= endpt; x++){
      cout << x << ' ';
      cout << elements[x] << endl;
   }
}

void reverseOrder()
{
   for(int x = 195; x >= 0; x--)
      cout << elements[x] << endl;
}

void sumArray()
{
   unsigned int sum = 0;
   for(int x = 0; x <= 195; x++)
      sum += elements[x];

   cout << sum << endl;
}

float arrayMean(int array[])
{
   unsigned int sum = 0;
   for(int x = 0; x <= 195; x++)
      sum += array[x];

   return(sum / 196);
}

float standardDeviation(int array[],float mean)
{
   float E = 0;

   for(int x = 0; x <= 195; x++){
      E += pow((array[x] - mean),2);
   }

   return(sqrt(E / 196));
}
