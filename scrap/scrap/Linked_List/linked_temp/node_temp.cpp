// list node class using generic form for data

//#include "node_temp.h"
   
   template <class element> 
   	node_temp<element>::node_temp()
   {
   }	// Construct an uninitialized node
   	 
   template <class element> 
   	node_temp<element>::node_temp(const element &item)
   { // begin list_node
      data = item;	// initialize data
      next = NULL;	// NULL defined in stddef.h
   } // end list_node
   
   template <class element> 
   	void node_temp<element>::put_item(const element &item)
   { // begin put_item
      data = item;
   } // end put_item
   
   template <class element> 
   	void node_temp<element>::put_next(node_ptr ptr)
   { // begin put_next
      next = ptr;
   } // end put_next
   
   template <class element> 
   	element node_temp<element>::get_item()
   { // begin get_item
      return data;
   } // end get_item
   
   template <class element> 
   	node_temp<element>* node_temp<element>::get_next()
   { // begin get_next
      return next;
   } // end get_next
   
