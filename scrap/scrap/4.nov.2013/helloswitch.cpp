#include <iostream>

using namespace std;

int main()
{

   int choice;

      cout << "Please enter 1, 2, or 3: ";
      cin >> choice;

      while (bool loop = true)
      {
   	 switch(choice){
	 case 1:
	    cout << "Hello" << endl;
	    break;
	 case 2:
	    cout << "Great Day" << endl;
	    break;
	 case 3:
	    cout << "Go PACK Go" << endl;
	    break;
	 default:
	    cout << "Invalid Entry" << endl;
	    loop = false;
	    break;
         }
      }
      return (0);
}
