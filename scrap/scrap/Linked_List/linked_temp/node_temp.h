// list node class using generic form for data

#include <stddef.h>
#ifndef NODE_H
  #define NODE_H
#endif  

   template <class element> class node_temp
   {
   public: 
      typedef node_temp<element> *node_ptr;
   
     // constructors
      node_temp();  	 
      node_temp(const element &item);
   	
   	//transformers
      void put_item(const element &item);
      void put_next(node_ptr ptr);
   	
   	//observers
      element get_item();
      node_ptr get_next();
      
   protected:
      // Define node data fields 
      element data;	// element defined in instantiation
      node_ptr next;	// points to next node in the list
   
   };
#include "node_temp.cpp"
