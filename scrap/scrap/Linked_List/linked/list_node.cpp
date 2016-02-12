// Class file: list_node.cpp

// Implement the functions defined in list_node.h

#include "list_node.h"	// Must have header file
			// element.h included in list_node.h

// Constructor - uninitialized node
   list_node::list_node()
   { // begin list_node
   // do nothing
   } // end list_node


// Constructor - data initialized to item, next to NULL
   list_node:: list_node(const element &item)
   { // begin list_node
      data = item;	// initialize data
      next = NULL;	// NULL defined in stddef.h
   } // end list_node

// observers
   // Return data from receiver
   element list_node::get_item()
   { // begin get_item
      return data;
   } // end get_item

   // Return pointer from receiver
   list_node* list_node::get_next()
   { // begin get_next
      return next;
   } // end get_next
   
//transformers
    // Set new value in receiver data
   void list_node::put_item(const element &item)
   { // begin put_item
      data = item;
   } // end put_item

   // Set new value in receiver pointer
   void list_node::put_next(list_node *ptr)
   { // begin put_next
      next = ptr;
   } // end put_next

// End of File  list_node.cpp
