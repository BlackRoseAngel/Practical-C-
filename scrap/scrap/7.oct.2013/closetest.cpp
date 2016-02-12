#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

   string hello;
   ifstream inData;

   cout << hello << endl;

   inData.open("file.txt");

   getline(inData, hello);

   cout << "Your string is: " << hello << endl;

   return(0);
}
