#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int size = 1;
bool loop = true;
void ZeroOut(int arg);

int main()
{
   int input[size];

   while (loop)
   {
      int position = 0;
      cout << "Input a number: ";
      cin >> input[position];
      ZeroOut(input[position]);
      size++;
      position++;
   } //end while

   for (int pos = 0; pos < size; pos++)
   {
      cout << input[pos] << endl;
   } //end for

   return(0);
} //end main()

void ZeroOut(int arg)
{
   if (arg == 0)
      loop = false;
}
