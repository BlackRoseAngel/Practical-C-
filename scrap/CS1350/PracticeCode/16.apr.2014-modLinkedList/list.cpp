/* Class File: list.cpp */

//Implement the functions defined in list.h

#include "element.h"
#include "list.h"

// Constructor - uninitialized node
list::list_node()
{ //begin list_node
//do nothing
} //end list_node

//Constructor - data initialized to item, next to NULL
list::list_node(const element &item)
{ //begin list_node
   data = item;
   next = NULL;
} //end list_node
