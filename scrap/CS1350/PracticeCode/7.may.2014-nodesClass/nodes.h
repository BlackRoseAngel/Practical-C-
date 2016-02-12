/**************************************************************************

* Header File: nodes.h

* Created: 7.5.14 ; Modified: 8.5.14

* Version: 2.3

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#ifndef NODES_H
#include <assert.h>

class nodes
{
   public:
      //Constructors
      nodes(); //construct an empty node
      nodes(nodes&nL); //copy constructor

      //Transformers
      void append(const int& item); //adds a new node to the end of nodeList
      void insert_at(const int& item, const int loc); //adds a new node at location
      void remove_at(const int& loc); //removes a node at given location
      void sort(); //sorts list ascendingly

      //Observers
      int get_item(const int& loc); //gets node at given location
      int get_size(); //returns size of linked_list

      //Iterators
      bool is_empty(); //tests if list is empty
      void traverse(); //outputs entire list

   protected:
      //Data Members
      typedef struct unit
      {
	 int data;
	 unit *next;

      	 unit(int value, unit *next1 = NULL)
         {
            data = value;
	    next = next1;
	 }
      } node;

      node *head;
      int size;

}; //end class 

#define NODES_H
#endif
