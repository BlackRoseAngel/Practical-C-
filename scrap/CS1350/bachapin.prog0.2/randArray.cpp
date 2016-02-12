/**************************************************************************

* Program: practice 0.2

* Created: 1.25.14 ; Modified: 1.25.14

* Due Date: 1.29.14

* Version: 1.3

* Creator: Brett Chapin(bachapin)

* Purpose: This program will fill an array with 150 to 1000 random integers
  to then perform a sum, mean, and standard deviation calculations.

**************************************************************************/
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int randomNum[1000];
int elements = 0;
int sum;
float mean;
float standardDeviation(int array[], float mean);

int main()
{
   srand(time(0));
   elements = rand() % 1000 + 150;

   for(int x = 0; x < elements; x++){
      randomNum[x] = rand() % 1000;
   }

   for(int x = 0; x < elements; x++){
      sum += randomNum[x];
   }

   mean = sum / elements;

   cout << "There are " << elements << " elements in the array." << endl;
   cout << "The sum of the array is " << sum << "." << endl;
   cout << "The mean of the array is " << mean << "." << endl;
   cout << "The standard deviation of the array is " << standardDeviation(randomNum, mean) << "." << endl;
   
   return(0);
} //end main()

float standardDeviation(int array[], float mean)
{
   float E = 0;

   for(int x = 0; x <= 195; x++){
      E += pow((array[x] - mean),2);
   }

   return(sqrt(E / 196));
} //end standardDeviation()
