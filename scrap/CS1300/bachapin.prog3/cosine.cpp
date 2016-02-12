/**************************************************************************

* Program: CS1300 Project 3 - Math and Such

* Created: 11.11.13 ; Modified: 11.12.13

* Due Date: 11.8.13

* Version: 6.2

* Creator: Brett Chapin(bachapin)

* Purpose: This program calculates how many iterations of the cosine
  estimation formula it requires to match up with the absolute cosine
  on a scale of what decimal place your checking for.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

const double pi = 3.14159;
int degrees[4];
double cosine[4];
double radian(int degree);
int factorial(int factor);
int terms(double radians, int cosine, int position);
int compareConverter(int test, double convert);
ifstream neededDegrees;
ofstream outputTerm;

int main()
{
   //Opens the files that store the resulting data and the input data.
   neededDegrees.open("degrees.txt");
   outputTerm.open("cosine.txt");

   //Stores the information from input file to the degree array.
   for(int n = 0; n < 4; n++){
      neededDegrees >> degrees[n];
      cosine[n] = cos(radian(degrees[n]));
   }
   
   //Adds the header to the output file.
   outputTerm << "Degree(s)      10^-2        10^-3        10^-4" << endl;
   outputTerm << "-------------------------------------------------" << endl;

   //Runs calculations on each degree for the cosine esimation term count.
   for(int x = 0; x < 4; x++){
      outputTerm << degrees[x] << "               ";
      for(int y = 2; y <= 4; y++){
         outputTerm << terms(radian(degrees[x]),compareConverter(y,cosine[x]), y) << "            ";
      }
      outputTerm << endl;
   }

   cout << "Information Completed." << endl;

   //Closes opened files.
   neededDegrees.close();
   outputTerm.close();
   return(0);
} //end main()

double radian(int degree)
{
   double convert;
   //Converts degrees into radians.
   convert = (degree / 180.0) * pi;
   return(convert);
} //end radian()

int factorial(int factor)
{
  int result = 1;
  //Runs a loop to caclulate the factorial of an inputted number.
  for(int n = factor; n > 0; n--)
    result *= n;
  return(result); 
} //end factorial()

int compareConverter(int test, double convert)
{
   int compareOutput;
   //Converts a double into a comparable integer value.
   compareOutput = (pow(10.0, test) * convert);
   return(compareOutput);
}

int terms(double radians, int cosine, int position)
{
   int term = 0;
   double estCosine = 1.0;
   int intCosine;
   bool plusMinus = true;

   do{ //A do-while loop that runs the calculations to find how many terms it takes to match the actual cosine value.
      term++; //incrament term

      //If statement that flip-flops the equations operator for each loop through.
      if(plusMinus == true){
         estCosine -= (pow(radians,term * 2) / factorial(term *2));
         plusMinus = false;
      }
      else{
	 estCosine += (pow(radians,term * 2) / factorial(term *2));
         plusMinus = true;
      }

      //Takes the calculated cosine value, and changes it to an integer to compare.
      intCosine = compareConverter(position, estCosine);
   }while(!(cosine == intCosine));

   return(term);
}
