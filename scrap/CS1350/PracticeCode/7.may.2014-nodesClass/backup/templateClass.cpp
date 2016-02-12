/**************************************************************************

* Class File: nodes.cpp

* Created: 7.5.14 ; Modified: 7.5.14

* Version: 0.1

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#include "nodes.h"
#include <assert.h>
#include <iostream>

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
} //end append()

bool nodes::insert_at(const int& item, const int loc)
{
} //end insert_at()

bool nodes::remove_at(const int& loc)
{
} //end remove_at()

void nodes::sort()
{
} //end sort()

//Observers
int nodes::get_item(const int& loc)
{
} //end get_item()

int nodes::get_size()
{
} //end get_size()

//Iterators
bool nodes::is_empty()
{
} //end is_empty()
