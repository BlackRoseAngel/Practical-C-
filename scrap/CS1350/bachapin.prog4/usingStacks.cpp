/**************************************************************************

* Program: usingStacks.cpp

* Created: 4.21.14 ; Modified: 4.21.14

* Due Date: 4.23.14

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This program is made to illustrate the use of a stack by push
  information to the stack. This stack is seperated in two forms: StackA
  which is for integers under 1000, and StackB which is integers over 1000.
  All the integers must be positive.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include "stacks.h"

using namespace std;

int randNum();

int main()
{
   int usrInput;
   char ch;
   stacks testStack;
   srand(time(0));

   do{
      cout << "0.Quit" << endl;
      cout << "1.Push Number" << endl;
      cout << "2.Pop Number" << endl;
      cout << "3.Get Stack Size" << endl;
      cout << "4.Output Stack" << endl;
      cout << "5.Test(Empty)" << endl;
      cout << "6.Test(Full)" << endl;
      cout << "7.AutoFill" << endl;
      cout << "8.Empty List" << endl;

      cout << "Please enter your choice: ";
      cin >> ch;

      switch(ch)
      {
	 case '0': break;
	 case '1':{ //Push Number
		     cout << "Please input a positive integer: ";
		     cin >> usrInput;

		     //Test Input for usability
		     if(testStack.usable_input(usrInput) == true){
			testStack.push(usrInput);
			cout << "Input accepted!" << endl;
                        cout << "StackA Size: " << testStack.stacka_size() << " StackB Size: " << testStack.stackb_size() << " Total Stack Size: " << testStack.stack_size() << endl;
		     } else
			cout << "Invalid Input!" << endl;

		     cout << endl;
		     break;
		  }

	 case '2':{ //Pop Number
		     char chc;
		     cout << "Please enter which stack you want to pop a or b: ";
		     cin >> chc;

                     if(testStack.is_empty() == false){
		        if(chc == 'a' || chc == 'b'){
			   if(testStack.stacka_size() > 0 && testStack.stackb_size() > 0){
			      testStack.pop(chc);
		              cout << "StackA Size: " << testStack.stacka_size() << " StackB Size: " << testStack.stackb_size() << " Total Stack Size: " << testStack.stack_size() << endl;
			   } else
			      cout << "Stack is empty, you can't pop an empty stack!" << endl;
		              } else
			         cout << "Invalid Input!" << endl;
		     } else
			cout << "You can't pop a number off of an empty stack!" << endl;
		     

		     cout << endl;
		     break;
		  }

	 case '3':{ //Get Stack Size
		     char chc;
		     cout << "Please enter which stack you want the size to a, b, or t(total): ";
		     cin >> chc;

		     if (chc == 'a' || chc == 'b' || chc == 't'){
			if(chc == 'a')
			   cout << "StackA Size: " << testStack.stacka_size() << endl;
			else if(chc == 'b')
			   cout << "StackB Size: " << testStack.stackb_size() << endl;
			else if(chc == 't')
			   cout << "Total Stack Size: " << testStack.stack_size() << endl;
		     } else
			cout << "Invalid Input!" << endl;

		     cout << endl;
		     break;
		  }

	 case '4':{ //Output Stack
		     char chc;
                    
		     if(testStack.is_empty() == false){
		        cout << "Please enter which stack you would like output a or b: ";
		        cin >> chc;

		        if(chc == 'a' || chc == 'b'){
			   if(chc == 'a'){
			      if(testStack.stacka_size() == 0)
				 cout << "StackA is empty!" << endl;
			      else{
			      for(int x = (testStack.stacka_size() - 1); x >= 0; x--)
			         cout << testStack.get_item(x) << " @ pos. " << x << endl;
			   }} else{
			      if(testStack.stackb_size() == 0)
				 cout << "StackB is empty!" << endl;
			      else{
			      for(int x = (200 - testStack.stackb_size()); x <= 199; x++)
			         cout << testStack.get_item(x) << " @ pos. " << x << endl;
			      }}
		        } else
			   cout << "Invalid Input!" << endl;
		     } else
			cout << "Stack is empty!" << endl;

		     cout << endl;
		     break;
		  }

	 case '5':{ //Test(Empty)
		     if(testStack.is_empty() == true)
			cout << "The stack is empty." << endl;
		     else
			cout << "The stack is not empty." << endl;

		     cout << endl;
		     break;
		  }

	 case '6':{ //Test(Full)
		     if(testStack.is_full() == true)
			cout << "The stack is full." << endl;
		     else
			cout << "The stack is not full." << endl;

		     cout << endl;
		     break;
		  }

	 case '7':{ //AutoFill Stack
                     if(testStack.is_full() == true)
			cout << "Can't input anymore values, stack already full." << endl;
		     else{
                        for(int x = (200 - testStack.stack_size()); x > 0; x--)
			   testStack.push(randNum());
			cout << "Stack is now full." << endl;
		     }

		     cout << endl;
		     break;
		  }

	 case '8':{ //Empty Stack
                     if(testStack.is_empty() == true)
			cout << "The stack is already empty!" << endl;
		     else{
			testStack.empty();
			cout << "The stack has been emptied!" << endl;
		     }

		     cout << endl;
		     break;
		  }
	     
      }


   }while(ch != '0');

   return(0);
} //end main()

int randNum()
{
   int num = 0;

   num = rand() % 4999 + 1;

   return(num);
}//end randNum()
