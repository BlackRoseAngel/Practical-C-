//* data in program
//* for first exam
//*

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream dataSet1, dataSet2;
float a, b, c, d, e, f, g, h;
int a2, b2, c2, d2, e2, f2, g2, h2;
int coerc;

int main ()
{

   dataSet1.open("data1.txt");

   dataSet1 >> a;
   a2 = int(a);
   dataSet1 >> b;
   b2 = int(b);
   dataSet1 >> c;
   c2 = int(c);
   dataSet1 >> d;
   d2 = int(d);
   dataSet1 >> e;
   e2 = int(e);
   dataSet1 >> f;
   f2 = int(f);
   dataSet1 >> g;
   g2 = int(g);
   dataSet1 >> h;
   h2 = int(h);

   coerc = e;
   cout << coerc << endl;

   cout << "thank you!" << endl;

   cout << a2 << endl;
   cout << b2 << endl;
   cout << c2 << endl;
   cout << d2 << endl;
   cout << e2 << endl;
   cout << f2 << endl;
   cout << g2 << endl;
   cout << h2 << endl;

  dataSet2.open("data2.txt");

   dataSet2 >> a;
   a2 = int(a);
   dataSet2 >> b;
   b2 = int(b);
   dataSet2 >> c;
   c2 = int(c);
   dataSet2 >> d;
   d2 = int(d);
   dataSet2 >> e;
   e2 = int(e);
   dataSet2 >> f;
   f2 = int(f);
   dataSet2 >> g;
   g2 = int(g);
   dataSet2 >> h;
   h2 = int(h);

   cout << a2 << endl;
   cout << b2 << endl;
   cout << c2 << endl;
   cout << d2 << endl;
   cout << e2 << endl;
   cout << f2 << endl;
   cout << g2 << endl;
   cout << h2 << endl;

   dataSet1.close();
   dataSet2.close();

   return 0;
}
