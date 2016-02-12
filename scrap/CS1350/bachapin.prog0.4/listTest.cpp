/*************************************************************************

* Program: List

* Created: 2.10.14 ; Modified: 2.25.14

* Due Date: 2.24.14

* Version: 17.2

* Creator: Brett Chapin(bachapin)

* Purpose: To make a custom class (list) to perform constructors,
  transformers, observers, and traversers. Then implement them showing
  whether they succeed or fail. After which, output the lists created
  in the format of 12 columns.

**************************************************************************/
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <time.h>
#include "list.h"

using namespace std;

int randNum(int max, int min);
void printList(list &arg,int len);
void removeNum(list &arg,int num);
string testFull(list &arg);
string testEmpty(list &arg);
string findPos(list &arg, int val, string list);

int main()
{
   int listLength, removeVal;
   list listOne, listThree;
   srand(time(0));

   cout << "Making list One...";
   //constructing list One, fills with random number of random data (10-99), displays how many elements, displays all elements, and tests to see if list is full.
   listLength = randNum(99,1);
   for(int x = 0; x <= listLength; x++)
      listOne.append(randNum(89,10));
   cout << "Complete!" << endl;
   cout << "List One: " << listOne.length() << " " << testFull(listOne) << endl;
   printList(listOne,listOne.length()-1);

   cout << "Making list Two...";
   //copying list One into list Two, displays how many elements, displays all elements, and tests to see if list is full.
   list listTwo(listOne);
   cout << "Complete!" << endl;
   cout << "List Two: " << listTwo.length() << " " << testFull(listTwo) << endl;
   printList(listTwo,listTwo.length()-1);

   cout << "Making list Three...";
   //filling an entire list class with variables, displays how many elements, displays all elements, and tests to see if its full.
   for(int x = 0; x <= 99; x++)
      listThree.append(randNum(89,10));
   cout << "Complete!" << endl;
   cout << "List Three: " << listThree.length() << " " << testFull(listThree) << endl;
   printList(listThree,listThree.length()-1);

   //gets user's input of an integer to remove (all occurances) from the list
   cout << "Enter a number 10 to 99 to search for, and remove: ";
   cin >> removeVal;

   //removes all occurances of removeVal from each list
   cout << "Removing value from list One." << endl;
   removeNum(listOne,removeVal);
   cout << "Removing value from list Two." << endl;
   removeNum(listTwo,removeVal);
   cout << "Removing value from list Three." << endl;
   removeNum(listThree,removeVal);

   //users inputs a value to find, and it returns the location of its first occurance in each list
   cout << "Enter an element that you would like to see the value of: ";
   cin >> removeVal;
   cout << findPos(listOne,removeVal,"List One ") << endl;
   cout << findPos(listTwo,removeVal,"List Two ") << endl;
   cout << findPos(listThree,removeVal,"List Three ") << endl;

   //shows how many elements the list can contain
   cout << "The maximum number of elements that can fit in the list is " << listOne.max() << endl;

   //empties list one and three
   listOne.clear();
   listThree.clear();
   
   //confirms if lists are empty
   cout << testEmpty(listOne) << endl;
   cout << testEmpty(listTwo) << endl;
   cout << testEmpty(listThree) << endl;

   //prints lists
   printList(listOne,listOne.length()-1);
   printList(listTwo,listTwo.length()-1);
   printList(listThree,listThree.length()-1);

   cout << "This concludes tests of each list, and the list class. Goodbye." << endl;


   return(0);
} //end main()

int randNum(int max, int min)
{
   int num = 0;

   num = rand() % max + min;

   return(num);
} //end randNum()

void printList(list &arg, int len)
{
   int y = 0;
   arg.goto_first();
   for(int x = 0; x <= len; x++){
       if(y == 11){
          cout << arg.get_next() << endl;
          y = 0;
       } else{
          cout << arg.get_next() << "   ";
          y++;
       }
   }
   cout << endl;
} //end printList()

void removeNum(list &arg, int num)
{
   bool exists = false;
   int occurances = 0;

   exists = arg.search(num);

   while(exists == true){
      arg.remove(num);
      exists = arg.search(num);
      occurances += 1;
   }

   cout << "There were " << occurances << " occurances of " << num << " that were removed." << endl;
   cout << "Your new list length is " << arg.length() << endl;

} //end removeNum()

string testFull(list &arg)
{
   if(arg.is_full() == true)
      return("List is full!");
   else
      return("List is not full!");
} //end testFull()

string testEmpty(list &arg)
{
   if(arg.is_empty() == true)
      return("List is empty!");
   else
      return("List is not empty!");
} //end testEmpty()

string findPos(list &arg, int val, string list)
{
   stringstream output;
   if(arg.get_item(val-1) == -1){
      output << list << "does not contain " << val << " elements.";
      return(output.str());
   }else{
      output << list << "has value " << arg.get_item(val-1) << " at position " << val << ".";
      return(output.str());
   }
} //end findPos()
