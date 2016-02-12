#include <iostream>

using namespace std;

int usr_input;

int main()
{

   bool temp;

   cout << "Please input a temperature: ";
   cin >> usr_input;

   temp = ( usr_input > 32 );

   if (temp == 1){
      cout << "Above Freezing." << endl;
   } else {
      cout << "Freezing or below." << endl;
   }

   return(0);
}
