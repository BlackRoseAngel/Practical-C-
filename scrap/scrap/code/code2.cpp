#include <iostream>
#include <string>

using namespace std;

int main()
{

   string quickCheck = "I do not like green eggs and ham. I do not like them, Sam-I-am.";
   string modString;

   modString = quickCheck.substr(10, 20) + quickCheck.substr(0, 10);
 
   cout << modString << endl;

   return(0);
} //end main()
