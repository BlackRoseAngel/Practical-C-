// Example of how a recursive insert into a linked might be done. The public
// function is available to the user of the class. The local (recursive) 
// function is known only in the class.

// recursive insert - recalls itself passing a pointer to the next node (list)
// this is private to the class
   void insrt(const list_node lst, const element &item)
   {
      if (lst != NULL) // then not at the end of the list 
       						// i.e. terminal condition
         if (item > lst->get_item()) // then the new item goes 
         										//farther down the list 
         										// i.e. other terminal condition
         {
            insrt(lst -> get_next(), item); // recursive call 
         // on return put the new item in the list
            if ((lst->get_next() == NULL) || 
                (item < lst->get_next()->get_item())) 
            	 // then new item goes here
            {   // so, create a new node and hook it up
               list_node *current = new list_node;
               current->put_item(item);
               current->put_next(lst->get_next());
               lst->put_next(current);
            } 
         // otherwise item has been inserted previously 
         // so just return again
         }
   }

// public insert function
   void list::insert(const element &item)
   {
      if (empty()) // then new item starts of list
      {
         head = new list_node;
         head->put_item(item);
         head->put_next(NULL);
      }
      else // itmay be a new first item in the list
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
 
