#include <iostream>
#include <fstream>

using namespace std;

int main()
{

float a, b, c, d, e, f, g, h;
ifstream inData;
ofstream outData;

cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;
cout << e << endl;
cout << f << endl;
cout << g << endl;
cout << h << endl;

inData.open("stuff.txt");
outData.open("output.txt");

inData >> a;
inData >> b;
inData >> c;
inData >> d;
inData >> e;
inData >> f;
inData >> g;
inData >> h;

cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;
cout << e << endl;
cout << f << endl;
cout << g << endl;
cout << h << endl;

outData << a << endl;
outData << b << endl;
outData << c << endl;
outData << d << endl;
outData << e << endl;
outData << f << endl;
outData << g << endl;
outData << h << endl;

inData.close();
outData.close();

return(0);
}
