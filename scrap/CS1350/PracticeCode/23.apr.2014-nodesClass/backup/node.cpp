/**************************************************************************

* Class File: node.cpp

* Created: 30.4.14 ; Modified: 5.5.14

* Version: 1.1

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#include "node.h"
#include <assert.h>
#include <iostream>

using namespace std;

//Constructors
node::node()
{
   head = NULL;
   size = 0;
}

node::node(node& nL)
{
}

node::~node()
{
   size = 0;
   delete head;
}

//Transformers
void node::append(const int& item)
{
   if(head == NULL){
      nodes *temp = new nodes;

      temp->data = item;
      cout << "Temp: " << temp << endl;
      cout << item << endl;
      temp->next = NULL;
      head = temp;
      cout << "Head: " << head << endl;
      cout << "Next: " << head->next << endl;

   } else{
      nodes *temp = new nodes;

      temp = head;
      cout << "Head in else: " << temp << head << endl;

      while(temp->next != NULL)
	 temp = temp->next;

      //nodes *temp = new nodes;
      cout << "Next in while: " << temp->next << endl;
      temp->data = item;
      temp->next = NULL;
      temp->next = temp;
      cout << "Temp: " << temp << " Temp1: " << temp << endl;
   }     
      size++;
}

bool node::insert_at(const int& item, const int loc)
{
   if(size == 0)
      return(false);
   else{
      nodes *temp1 = new nodes;
      temp1 = head;

      for(int i = 1; i < loc; i++)
      {
	 temp1 = temp1->next;
	 if(temp1 == NULL){
	    return(false);
	    break;
	 }
      }
      
      nodes *temp = new nodes;
      temp->data = item;
      temp->next = temp1->next;
      temp1->next = temp;

      size++;
      return(true);
       }
}

void node::remove_at(const int& loc)
{
}

void node::sort()
{
}

//Observers
int node::get_item(const int& loc)
{
   nodes *temp = new nodes;
   temp = head;

   for(int i = 0; i < loc; i++)
      temp = temp->next;

   return(temp->data);
}

int node::get_size()
{
   return(size);
}

//Iterators
bool node::is_empty()
{
   if(size == 0)
      return(true);
   else
      return(false);
}
