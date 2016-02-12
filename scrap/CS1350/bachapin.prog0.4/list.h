//implement a static list of ints class

#ifndef LIST_H

   class list
   {
   public: // methods
    //constructors
      list(); // null constructor
      list(const list& lst); // copy constructor
   
    //transformers
    // add an item to the end of the list
      void append(const int& item);
    // find and remove a specific item from the list
      void remove(const int item);
    // make the list empty
      void clear();
   
    //observers
    // get the whichth item in the list - 
    // raise overflow error if list is too short
      int get_item(unsigned short which);
    // find out how many data are in the list
      unsigned short length();
    // find out if the list is empty
      bool is_empty();
    // find out if the list is full
      bool is_full();
    // search the list for an item
      bool search(int item);
    // return maximum number of data allowed
      unsigned short max();
   
    //iterators
    // set a global persistant counter to the first item in the list
      void goto_first();
    // get the "next" item in the list based on a global persistant counter
    // and increment the counter
      int get_next();
    // set global persistant counter to the last item in the list
      void goto_last();
   
      // define maximium length
      static unsigned short const MAX = 100;
      
   protected:
        
    //data
    // define data array
      int list_data[MAX];
    // class global persistant counters
      unsigned short next;
    // keep the number of items in the list
      unsigned short how_many;
   
    //local method
      unsigned short find_item(int item); 
   	// find the item and return the location of it
   };

#define LIST_H
#endif
