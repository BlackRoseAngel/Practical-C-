// Class header file: list_node.h

// Header file for the "list_node" class
// A list-node will represent one node in a linked list

#ifndef LISTNODE_H
#include "element.h"	// define data type contained in list-node

   class list_node
   {
     public:
     // Constructors
      list_node();	// Construct an uninitialized node
      list_node(const element &item);// Construct a node with data and 
   				// pointer initialized to NULL
      
     //transformers
     // Function that allows client to place a value in the node
      void put_item(const element &item);
   
     // Function that allows the client to place a pointer in the node
      void put_next(list_node *ptr);
   
     // observers
     // Function that returns the datum from a node
      element get_item();
   
     // Function that returns the pointer from a node
      list_node *get_next();
      
    protected: // data fields will accessable only through the methods on the class
   
     // Define node data fields 
      element data;	// element defined in element.h
      list_node *next;	// points to next node in the list
   
   }; // end of class definition
		
#define LISTNODE_H
#endif

