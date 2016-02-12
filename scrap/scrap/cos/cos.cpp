#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.14159;
int degrees;
int position;
float radian(int degree);
int factorial(int factor);
int terms(float radians, int cosine);
int compareConverter(int test, float convert);

int main()
{
   float cosineValue;
   int cosineValueProcessed;

   cout << "Please enter a degree: ";
   cin >> degrees;
   cout << "Please enter the decimal place you would like to test to: ";
   cin >> position;

   cosineValue = cos(radian(degrees));
   cosineValueProcessed = compareConverter(position, cosineValue);
   cout << cosineValue << endl;
   cout << cosineValueProcessed << endl;

   cout << terms(radian(degrees), cosineValueProcessed) << endl;

   return(0);
}

float radian(int degree)
{
   float convert;
   convert = (degree / 180.0) * pi;
   return(convert);
}

int factorial(int factor)
{
   int result = 1;
   for(int n = factor; n > 0; n--)
      result *= n;
   return(result);
}

int compareConverter(int test, float convert)
{
   return(pow(10.0, test) * convert);
}

int terms(float radians, int cosine)
{
   int term = 0;
   float estCosine = 1.0;
   int intCosine;
   bool plusMinus = true;

   do{
      term++; //incrament term

      if(plusMinus == true){
         estCosine -= (pow(radians,term * 2) / factorial(term *2));
         plusMinus = false;
      }
      else{
	 estCosine += (pow(radians,term * 2) / factorial(term *2));
         plusMinus = true;
      }

      intCosine = compareConverter(position, estCosine);
      cout << intCosine << endl;

   }while(!(cosine == intCosine));

   return(term);
}
