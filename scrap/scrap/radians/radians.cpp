#include <iostream>
#include <cmath>

using namespace std;

int degrees;
float pi = 3.14159;
float radian(float arg);

int main()
{

   cout << "Give me a degree of input: ";
   cin >> degrees;

   cout << radian(degrees) << endl;
   cout << cos(radian(degrees)) << endl;
   return(0);
}

float radian(float arg)
{
   float radianConvert;

   radianConvert = (arg / 180) * pi;
   return(radianConvert);
}
