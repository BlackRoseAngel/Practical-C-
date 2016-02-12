#include <iostream>

using namespace std;

int usr_input;

int main()
{

   bool temp;

   cout << "Please input a temp 33 to 211: ";
   cin >> usr_input;

   temp = ((usr_input > 33) && (usr_input < 211));

   if (temp == 1){
      cout << "In range." << endl;
   } else {
      cout << "Out of range." << endl;
   }

   if (usr_input < 32){
      cout << "Temperature is below freezing." << endl;
   } else if (usr_input == 32){
      cout << "Temperature is freezing." << endl;
   } else if (usr_input == 212){
      cout << "Temperature is boiling." << endl;
   } else if (usr_input < 212){
      cout << "Above freezing below boiling point." << endl;
   } else{
      cout << "Above boiling!" << endl;
   }//end if

   return(0);
}
