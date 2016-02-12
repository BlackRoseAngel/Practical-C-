#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream fileInfo;
string hello;

int main()
{

   fileInfo.open("myfile.txt");
   getline(fileInfo, hello);
    
   cout << fileInfo << endl;

   fileInfo.close();

   return(0);
} //end main()
