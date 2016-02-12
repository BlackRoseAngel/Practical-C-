#include <iostream>
#include <cmath>

using namespace std;

int myBrain[100];
int position = 0;
int avg = 0;
int total = 0;

int main()
{

   while (position < 101){
      cout << "Please enter an IQ score: ";
      cin >> myBrain[position];
      total += myBrain[position];
      position ++;
      avg = total / position;
      cout << "The total IQ is " << total << " and the average of that is " << avg << " with a total of " << position << " number of IQ scores entered." << endl;
   }
   return(0);
}
