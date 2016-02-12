// Class implementation file: linklist.cpp

// Implementation of class defined in linked_list.h

// This class can be used to create and maintain an unsorted
// linked list of data as defined in element.h. The list node
// form is defined in list_node.h (implemented in list_node.cpp).

 #include <assert.h>		// used to test list consistancy
 #include "linked_list.h"	// this class header file
 
// Class constructor - sets the object that the client is declaring
// to be the empty list
   list::list()
   {
      head = NULL;		// list is empty
      current = NULL;	// to be safe initialize current
      previous = NULL;	// & previous
   }

// Copy constructor - copies lst to the new object that the client
// is declaring
   list::list(list& lst)
   { // start of copy constructor
   // Create a temporary pointer to follow the parameter lst
      list_node *temp = lst.head;
   
      if (temp != NULL)	// there is a list to copy
      {
      // set receiver's current to point to new node
         current = new list_node;
      
      // set new node's data to lst's data
         current->put_item(temp->get_item());
      
      // initialize new node's next field
         current->put_next(NULL);
      
      // receiver's head pointer must point to new node
         head = current;
      
      // move temp to next node in lst
         temp = temp->get_next();
      
      // as long as there are more nodes in lst
         while (temp != NULL)
         {
         // make current node's next field point to a new node	
            current->put_next(new list_node);
         
         // make current point to the new node
            move_to_next();
         
         // set current node's data
            current->put_item(temp->get_item());
         
         // set current node's next field
            current->put_next(NULL);
         
         // advance temp to next node
            temp = temp->get_next();
         } // end while
      } // end if
      else	// there is no list to copy, so head is NULL:
         head = NULL;
   
   }	// end of copy constructor

// Destructor - removes all the receiver's list_node's from memory
// freeing memory space for other uses
   list::~list()
   {
   // make all pointers point to the first node
      previous = current = head;
   
   // as long as there are more nodes to delete
      while (current != NULL)
      {
      // move current to point to next node
         current = previous->get_next();
      
      // remove the previous node from memory
         delete previous;
      
      // advance previous to next node
         previous = current;
      }
   
   // set all pointers to NULL - list is empty
      head = current = previous = NULL;
   
   } // end of destructor
	
// Add a new item to the end of the list
   void list::append(const element &item)
   {
      if (empty()) // then make a new node and point head at it
      {
         head = new list_node;
         head->put_item(item);
         head->put_next(NULL);
      }
      else // must find end of list and addd new item
      {
         current = head;	// start at beginning of list
      
      // not at end of list keep moving
         while (current->get_next() != NULL)
            move_to_next();
      
      // now current points at last node in list
      // make next field point to a new node
         current->put_next(new list_node);
      
      // make current point to new node
         move_to_next();
      
      // set current node to new value 
         current->put_item(item);
      
      // mark new node as last node in list
         current->put_next(NULL);
      }
   }

// recursive insert - recalls itself passing a pointer to the next node (list)
// this is private to the class
   void insrt(list_node *lst, const element &item)
   {
      if (lst != NULL) // then not at the end of the list - terminal condition
         if (item > lst->get_item()) // then the new item goes farther down the list - other terminal condition
         {
            insrt(lst->get_next(), item); // recursive call 
         	// on return put the new item in the list
            if ((lst->get_next() == NULL) || 
               (item < lst->get_next()->get_item())) // then new item goes here
            { // create a new node and hook it up
               list_node *current = new list_node;
               current->put_item(item);
               current->put_next(lst->get_next());
               lst->put_next(current);
            } 
         // otherwise item has been inserted previously so just return again
         }
   }

// public insert function
   void list::insert(const element &item)
   {
      if (empty()) // then new item starts the list
      {
         head = new list_node;
         head->put_item(item);
         head->put_next(NULL);
      }
      else // it may be a new first item in the list
      {
         if (head->get_item() >= item) // then new item is the new first
         {
            current = new list_node;
            current->put_item(item);
            current->put_next(head);
            head = current;
         }
         else // the item goes somewhere further down the list.
            insrt(head, item);
      }
   }

 //   void list::insert(const element &item)
//    { //insert
//       if (empty()) // new item goes at beginning of list
//       { //if empty
//          head = new list_node;
//          head->put_item(item);
//          head->put_next(NULL);
//       }// end if
//       else // it goes somewhere in the list
//       {// else not empty
//          if (head->get_item() >= item) // new item is first
//          {//if first
//             current = new list_node;
//             current->put_item(item);
//             current->put_next(head);
//             head = current;
//          }// first
//          else // must find place for new item
//          {
//             previous = head;
//             current = previous->get_next();
//             while ((current != NULL) && (current->get_item() < item))
//             {
//                previous = current;
//                current = current->get_next();
//             }
//          // now previous points to node that should preceed the new one
//             current = new list_node;
//             current->put_item(item);
//             current->put_next(previous->get_next());
//             previous->put_next(current);
//          }
//       }
//    }
// 
 
// Implement utility functions
// Test for empty list
   bool list::empty()
   {
      return head == NULL;  // if head is NULL, list is empty
   }

// Test for end of list 
   bool list::at_end()
   {
   // if list is empty, must be at end OR
   // if current point to last node then at end of list
      if (head == NULL)
         return true;
      else if (current == NULL)
         return true;
      //else if (current->get_next() == NULL)
      //return true;
      else
         return false;
     
      //return ((head == NULL) || ((current != NULL) &&
         //(current->get_next() == NULL)));
   }
 
   void list::move_to_next()
   {
   // check current so that illegal reference is not made
      if (current != NULL)
      {
         current = current->get_next();	// advance cuurent
      }
   }

   void list::move_to_start()
   {
      current = head;
   }

   element list::get_current()
   {
      assert(current != NULL);
      return current->get_item();
   }
 
// End of file linked_list.cpp

