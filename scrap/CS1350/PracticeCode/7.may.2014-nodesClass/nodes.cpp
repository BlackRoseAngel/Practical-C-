/**************************************************************************

* Class File: nodes.cpp

* Created: 7.5.14 ; Modified: 8.5.14

* Version: 2.19

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#include "nodes.h"
#include <assert.h>
#include <iostream>

using namespace std;

//Constructors
nodes::nodes()
{
   head = NULL;
   size = 0;
} //end nodes()

nodes::nodes(nodes& nL)
{
} //end copy nodes()

//Transformers
void nodes::append(const int& item)
{
   if(head == NULL)
      head = new node(item);
   else
   {
      node *nodePtr;
      nodePtr = head;

      //Traverse the list to locate the last node
      while(nodePtr->next != NULL)
	 nodePtr = nodePtr->next;

      nodePtr->next = new node(item);
   } //end if-then-else statement

   size++;
} //end append()

void nodes::insert_at(const int& item, const int loc)
{
   int x = 1;
   node *temp = new node(item);
   node *nodePtr = head;

   if(loc == 1){
      temp->next = nodePtr;
      head = temp;
   } else{
      while(x != loc-1)
      {
         x++;
         nodePtr = nodePtr->next;
      } //end for loop

      temp->next = nodePtr->next;
      nodePtr->next = temp;
   } //end if-then-else

   size++;
} //end insert_at()

void nodes::remove_at(const int& loc)
{
   node *nodePtr = head;
   node *temp;

   if(loc == 1){
      nodePtr = nodePtr->next;
      head = nodePtr;
   } else{
      for(int x = 1; x < loc-1; x++)
      {
         nodePtr = nodePtr->next;
      } //end for loop

      temp = nodePtr;
      nodePtr = nodePtr->next;

      temp->next = nodePtr->next;
   } //end if-then-else

   size--;
} //end remove_at()

void nodes::sort()
{
   int tempData = 0;
   node *nodePtr;
   node *temp;
  
   for(nodePtr = head; nodePtr != NULL; nodePtr = nodePtr->next)
   {
      for(temp = nodePtr; temp != NULL; temp = temp->next)
      {
         if(nodePtr->data > temp->data)
         {
            tempData = nodePtr->data;
            nodePtr->data = temp->data;
            temp->data = tempData;
         } //end if-then-else
      } //end for loop
   } //end for loop
} //end sort()

//Observers
int nodes::get_item(const int& loc)
{
   node *nodePtr = head;
   for(int x = 1; x < loc; x++)
   {
      nodePtr = nodePtr->next;
   } //end for loop
   return(nodePtr->data);
} //end get_item()

int nodes::get_size()
{
   return(size);
} //end get_size()

//Iterators
bool nodes::is_empty()
{
   if(size == 0)
      return(true);
   else
      return(false);
} //end is_empty()

void nodes::traverse()
{
   int x = 1;
   node *nodePtr;
   nodePtr = head;

   cout << nodePtr->data << " @ pos. " << x << endl;

   while(nodePtr->next != NULL)
   {
      nodePtr = nodePtr->next;
      x++;
      cout << nodePtr->data << " @ pos. " << x << endl;
   } //end while loop
} //end traverse()
