// list node class using generic form for data
//#include "list_nodet.h"

     // Constructors
   template<class element>
      list_node<element>::list_node()
   {
   }	// Construct an uninitialized node	 
   template<class element>
      list_node<element>::list_node(const element &item)
   { // begin list_node
      data = item;	// initialize data
      next = NULL;	// NULL defined in stddef.h
   } // end list_node
   
   // Transformers
   template<class element>
      void list_node<element>::put_item
   							(const element &item)
   { // begin put_item
      data = item;
   } // end put_item   
   template<class element>
   void list_node<element>::put_next
   							(list_node<element> * ptr)
   { // begin put_next
      next = ptr;
   } // end put_next
      
   // Observers
   template<class element>
   element list_node<element>::get_item()
   { // begin get_item
      return data;
   } // end get_item  
   template<class element>
   list_node<element>* list_node<element>::get_next()
   { // begin get_next
      return next;
   } // end get_next
