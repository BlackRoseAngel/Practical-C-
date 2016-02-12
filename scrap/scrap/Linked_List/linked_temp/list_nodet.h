// list node class using generic form for data
#include <stddef.h>
#ifndef LIST_NODE_H
   template <class element> class list_node
   {
   public:
   
     // Constructors
      list_node();
      list_node(const element &item);
   
   // Transformers
      void put_item(const element &item);
      void put_next(list_node<element> *ptr);
   
   // Observers
      element get_item();
      list_node<element> *get_next();
   
    protected:
    // Define node data fields 
      element data;	// element defined in instantiation
      list_node<element> *next;// points to next node in the list
   
   };

#include "list_nodet.cpp"
#endif
#define LIST_NODE_H
