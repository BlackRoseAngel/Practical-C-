/**************************************************************************

* Header File: node.h

* Created: 23.4.14 ; Modified: 5.5.14

* Version: 1.0

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#ifndef NODE_H
#include <assert.h>

class node
{
   public:
      //Constructors
      node(); //construct an empty node
      node(node& nL); //copy constructor

      ~node(); //deconstruct list

      //Transformers
      void append(const int& item); //adds a new node to the end of linked list
      bool insert_at(const int& item, const int loc); //adds a new node at location
      void remove_at(const int& loc); //removes a node at a location
      void sort(); //sorts list ascending


      //Observers
      int get_item(const int& item); //gets node at itemth position
      int get_size(); //returns size of linked_list

      //Iterators
      bool is_empty();

   protected:
      //Data Members
      typedef struct nodes
      {
	 int data;
	 nodes *next
      }unit;
      nodes *head;
      int size;

}; //end class 

#define NODE_H
#endif
