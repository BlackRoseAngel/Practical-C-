// list node class using generic form for data

#include <stddef.h>
#ifndef LIST_NODE_H
   #define LIST_NODE_H
#endif

   template <class element> class list_node
   {
   public:   
   
     // Constructors
   
      list_node()
      {
      }	// Construct an uninitialized node
   	 
      list_node(const element &item)
      { // begin list_node
         data = item;	// initialize data
         next = NULL;	// NULL defined in stddef.h
      } // end list_node
   
      void put_item(const element &item)
      { // begin put_item
         data = item;
      } // end put_item
   
      void put_next(list_node *ptr)
      { // begin put_next
         next = ptr;
      } // end put_next
   
      element get_item()
      { // begin get_item
         return data;
      } // end get_item
   
      list_node* get_next()
      { // begin get_next
         return next;
      } // end get_next
   
    protected:
    // Define node data fields 
      element data;	// element defined in instantiation
      list_node* next;	// points to next node in the list
   
   };
