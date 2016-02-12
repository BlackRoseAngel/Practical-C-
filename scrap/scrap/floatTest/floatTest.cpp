#include <iostream>
#include <cmath>

using namespace std;

float input[2];
int output[2];

int main()
{
   cout << "Please enter a float to compare: ";
   cin >> input[0];
   cout << "Enter another float to compare: ";
   cin >> input[1];

   output[0] = input[0] * 100.0;
   output[1] = input[1] * 100.0;

   if(output[0] == output[1])
      cout << output[0] << " is the same as " << output[1] << " as far out as the second decimal place." << endl;
   else
      cout << output[0] << " is not the same as " << output[1] << " as far out as the second decimal place." << endl;

   return(0);
}
