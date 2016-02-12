/***********************************************************************************************

* Class Header File: list.h

* 

***********************************************************************************************/

// Header file for the "list" class
// A list-node will represent one node in a linked list

#include "element.h"
#ifndef LIST_H

class list
{
   public:
      //Constructors
      list_node(); //Construct an uninitialized node
      list_node(const element &item);	//Construct a node with data and
      					//pointer initialized to NULL

      list(); //Construct an empty list
      list(list& 1st); //Construct a copy of 1st
      
         //Deconstructor
      ~list(); //Clears list info
      void remove(const int ptr); //Deletes node in list
      void remove_first(); //Deletes first node
      void remove_last(); //Deletes last node

      //Transformers
      void append(const element &item); //Adds item to end of list
      void insert(const element &item, const int pos); //Adds item at position
      void append_last(const element &item); //Adds item to last position
      void sort(list& input); //Sorts list

      //Observers
      bool empty(); //Indicates if a list has something in it
      bool at_end(); //Indicates if pointer is at last node

      //Iterators
      string getItem(int pos); //Get item at specific position
      void traverse(); //Lists entire linked list

   protected:
      element data; //element defined in element.h
      list_node *next; //points to next node in the list
      list_node *head, 		//points to the first node
		*current,	//used to traverse list
		*previous;	//used to follow current

}; //end of class definition

#define LIST_H
#endif
