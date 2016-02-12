#include "list_node.cpp"	// the node class's header file
#include <assert.h>			// used to test list consistancy

   template<class element> class linked_list
   {
    public:
   
      linked_list()
      {
         head = NULL;		// list is empty
         current = NULL;		// to be safe initialize current
         previous = NULL;	// & previous
      }
   
      bool empty()
      {
         return head == NULL;
      }
   
      bool at_end()
      {
      	// should test to be sure current is not NULL
         return current->get_next() == NULL;
      }
   
      void move_to_start()
      {
         current = head;
      }
   
      void move_to_next()
      {
        	// should test to be sure current is not NULL
         current = current->get_next();
      }
   
      element get_cur()
      {
         // should test to be sure current is not NULL
         return current->get_item();
      }
   
      void append(const element & item)
      {
         if (empty()) // then make a new node and point head at it
         {
            head = new list_node<element>;
            head->put_item(item);
            head->put_next(NULL);
         }
         else // must find end of list and add new item
         {
            current = head;	// start at beginning of list
         
          	// not at end of list keep moving
            while (current->get_next() != NULL)
               current = current->get_next();
         
          	// now current points at last node in list
         	// make next field point to a new node
            current->put_next(new list_node<element>);
         
              // make current point to new node
            current = current->get_next();
         
              // set current node to new value  
            current->put_item(item);
         
              // mark new node as last node in list
            current->put_next(NULL);
         }
      }	   
   
      void reverse()
      {
         if (! empty())
            reverse_list(head);
      }
   
   
    protected:		 
      list_node<element> *head,	// points to first node of list
      		   *current,			// used to traverse list
      		   *previous;			// used to follow current
      				           
      void reverse_list(list_node<element> *temp)
      {
         list_node<element> *back;
         if (temp->get_next() != NULL)
         {
            reverse_list(temp->get_next());
            back = temp->get_next();
            back->put_next(temp);
            temp->put_next(NULL);
         }
         else
            head = temp;
      }
   				
      };
