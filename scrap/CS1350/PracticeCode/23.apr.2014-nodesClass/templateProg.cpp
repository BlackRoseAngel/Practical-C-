/**************************************************************************

* Program: useNode.cpp

* Created: 30.4.14 ; Modified: 5.5.14

* Due Date: 5.5.14

* Version: 1.4

* Creator: Brett Chapin(bachapin)

* Purpose:

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include "node.h"

using namespace std;

int main()
{
   node begin;
   char ch;
   int input;

   while(ch != '0'){
      cout << "0.Quit" << endl;
      cout << "1.Append Integer" << endl;
      cout << "2.Traverse List" << endl;

      cout << "Please input your selection: ";
      cin >> ch;

      switch(ch)
      {
	 case '0':{
		     cout << "Made it here!" << endl;
		     begin.~node();
		     break;
		  }
	 case '1':{
		     cout << "Please enter an integer: ";
		     cin >> input;

		     begin.append(input);
		     break;
		  }
	 case '2':{
		     if(begin.is_empty() == true)
			cout << "Your list is empty." << endl;
		     else{
			for(int x = 1; x < begin.get_size()+1; x++)
			   cout << begin.get_item(x) << " @ pos. " << x << endl;
		     }
		     break;
		  }
      }
   }

   return(0);
} //end main()
