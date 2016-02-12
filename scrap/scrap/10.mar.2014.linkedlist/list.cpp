#include <iostream>

using namespace std;

int *a, *b, *c;

int main()
{
   a = new int;
   b = new int;
   c = new int;

   *a = 10;
   *b = 35;
   *c = 16;

   cout << *a << endl;
   cout << *b << endl;
   cout << *c << endl;
   cout << "--" << endl;

   delete a;

   cout << *a << endl;
   cout << *b << endl;
   cout << *c << endl;
   cout << "--" << endl;

   a = new int;
   *a = 12;

   delete a;
   cout << *a << endl;
   cout << *b << endl;
   cout << *c << endl;

   return(0);
}
