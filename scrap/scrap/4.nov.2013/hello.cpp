#include <iostream>

using namespace std;

int main()
{

   int usr_input;

   while (true) {
      cout << "Please input 1, 2, or 3: ";
      cin >> usr_input;

      if (usr_input == 1)
	 cout << "Hello" << endl;
      else if (usr_input == 2)
	 cout << "Great Day" << endl;
      else if (usr_input == 3)
	 cout << "Go PACK Go" << endl;
      else {
	 cout << "Invalid Data" << endl;
	 break;
      }
   }
   return(0);
}
