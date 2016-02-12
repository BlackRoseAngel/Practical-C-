#include <iostream>
#include <string>

using namespace std;

string string1 = "miniscule";
string string2 = "minimum";
string string3 = "miniature";

int main()
{

   bool test;

   test = (string1 > string2);
   cout << "a. " << test << endl;

   test = ((string1 > string2) && (string2 > string3));
   cout << "b. " << test << endl;

   test = (string1.substr(0,4) == string2.substr(0,4));
   cout << "c. " << test << endl;

   test = (string1 > "maximum");
   cout << "d. " << test << endl;

   test = ((string3.substr(0,4) == "mini") || (string1 == string2));
   cout << "e. " << test << endl;

   test = ((string3.length() > string1.length()) && (string1 > string3));
   cout << "f. " << test << endl;

   test = !((string1.substr(8,1) == string3.substr(8,1)) && (string1.length() == 9));
   cout << "g. " << test << endl;

   return(0);
}
