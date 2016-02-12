#include <iostream>

using namespace std;

int *a, *b, *c;

int main()
{
   a = new int;
   *a = 5;
   b = new int;
   *b = 3;
   c = new int;
//   a = b;
//   *c = (float)*a * 3.31;
//   *a = 5 + *b;
   *c = 22;

   //print memory values (*a and *b should be equal to *c should be 9.93)
   cout << "*a = " << *a << endl;
   cout << "*b = " << *b << endl;
   cout << "*c = " << *c << endl;
   //print the location values
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "c = " << c << endl;

   delete a;
   delete b;
   delete c;
   a = 0;

   //print memory values
   cout << "*a = " << *a << endl;
   cout << "*b = " << *b << endl;
   cout << "*c = " << *c << endl;
   //print location values
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "c = " << c << endl;

   return(0);
}
