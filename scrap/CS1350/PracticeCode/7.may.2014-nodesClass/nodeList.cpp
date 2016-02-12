/**************************************************************************

* Program: nodeList.cpp

* Created: 7.5.14 ; Modified: 8.5.14

* Due Date: N/A

* Version: 2.9

* Creator: Brett Chapin(bachapin)

* Purpose: This program is similar to my linkedList program which illu-
  strated the use and partial implementation of a linkedList using nodes.
  This program breaks that one program down to three parts: nodes.h,
  nodes.cpp, and nodeList.cpp

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include "nodes.h"

using namespace std;

nodes list;
int input, location;
char ch;

int main()
{
   while(ch != '0'){
      cout << "0.Quit" << endl;
      cout << "1.Append Integer" << endl;
      cout << "2.Insert At" << endl;
      cout << "3.Traverse List" << endl;
      cout << "4.Get List Size" << endl;
      cout << "5.Remove Node" << endl;
      cout << "6.Test(Empty)" << endl;
      cout << "7.Sort" << endl;
      
      cout << "Please input your selection: ";
      cin >> ch;

      switch(ch)
      {
	 case '0':
		     break; //ends case '0'

	 case '1':{ //Append Integer
		     cout << "Please enter an integer: ";
		     cin >> input;
		     list.append(input);
		     cout << endl;
		     break;
		  } //end case '1'

	 case '2':{ //Insert At
                     while(true)
		     {
			cout << "Please pick a location: ";
			cin >> location;
                        if(location > list.get_size()+1)
			   cout << "The location can't be greater than "<< list.get_size() << "." << endl;
			else{
			   cout << "Please enter an integer: ";
			   cin >> input;

			   if(location == 1 && list.get_size() == 0)
			      list.append(input);
			   else
			      list.insert_at(input, location);

                           break;
			} //end if-then-else
		     } //end while loop
		     cout << endl;
		     break;
		  } //end case '2'

	 case '3':{ //Traverse List
		     if(list.is_empty() == false)
                        list.traverse();
		     else
			cout << "The list is empty!" << endl;

		     cout << endl;
		     break;
		  } //end case '3'

	 case '4':{ //Get List Size
		     cout << "There are " << list.get_size() << " nodes in your list." << endl;
		     cout << endl;
		     break;
		  } //end case '4'

	 case '5':{ //Remove Node
		     if(list.is_empty() == false){

			while(true){
		           cout << "Please enter the node you'd like removed: ";
		           cin >> location;

			   if(location > list.get_size())
			      cout << "Your list isn't that big." << endl;
			   else if(location <= 0){
			      cout << "That is an invalid node location." << endl;
			   } else{
			      list.remove_at(location);
			      break;
			   } //end if-then-else

			} //end while loop

		     } else if(list.is_empty() == true)
			   cout << "The list is empty." << endl;

		     cout << endl;
		     break;
		  } //end case '5'

	 case '6':{ //Test(Empty)
                     if(list.is_empty() == true)
			cout << "The list is empty." << endl;
		     else
			cout << "The list is not empty." << endl;

		     cout << endl;
		     break;
		  } //end case '6'

	 case '7':{ //Sort
		     if(list.is_empty() == false){
                        list.sort();
		        cout << "List is sorted." << endl;
		     } else
			cout << "List cannot be sorted currently." << endl;

		     cout << endl;
		     break;
		  } //end case '7'

      } //end switch statement
   } //end while loop

   return(0);
} //end main()
