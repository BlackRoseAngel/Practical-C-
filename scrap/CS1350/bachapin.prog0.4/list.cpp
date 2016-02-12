//implement a static list of ints class
#include "list.h"

// exception class to "throw" if an error occurs
class overflow_error
{};
    //constructors
      list::list()
      {
	 how_many = 0;
	 next = 0;
      } // null constructor

      list::list(const list& lst)
      {
	 how_many = lst.how_many;
	 for(int x = 0; x <= how_many; x++)
	    list_data[x] = lst.list_data[x];
      } // copy constructor
   
    //transformers
    // add an item to the end of the list
      void list::append(const int& item)
      {
        list_data[how_many++] = item;
//	throw overflow_error();
      } // end append// 

    // find and remove a specific item from the list
      void list::remove(const int item)
      {
	 int value = item;
	 for(int x = find_item(value); x <= how_many-1; x++)
	    list_data[x] = list_data[x+1];

	 how_many -= 1;
      } // end remove

    // make the list empty
      void list::clear()
      {
	 for(int x = 0; x <= how_many; x++)
	    list_data[x] = 0;
	 how_many = 0;
	 next = 0;
      } // end clear

    //observers
    // get the whichth item in the list - 
    // raise overflow error if list is too short
      int list::get_item(unsigned short which)
      {
         if(which > (how_many - 1))
	    return(-1);
	 else
	    return(list_data[which]);
      } // end get_item

    // find out how many data are in the list
      unsigned short list::length()
      {
	 return(how_many);
      } // end length

    // find out if the list is empty
      bool list::is_empty()
      {
	 if(how_many == 0)
	    return(true);
	 else
	    return(false);
      } // end is_empty

    // find out if the list is full
      bool list::is_full()
      {
	 if(how_many == MAX)
	    return(true);
	 else
	    return(false);
      } // end is_full

    // search the list for an item
      bool list::search(int item)
      {
	 bool Search;
	 for(int x = 0; x <= how_many-1; x++){
	    if(list_data[x] == item){
	       Search = true;
	       break;
	    }
	    else
	       Search = false;
         }
	 return Search;
      } // end search

    // return maximum number of data allowed
      unsigned short list::max()
      {
	 return(MAX);
      } // end max
   
    //iterators
    // set a global persistant counter to the first item in the list
      void list::goto_first()
      {
	 next = 0;
      } // end goto_first

    //  get the "next" item in the list based on a global persistant counter
    // and increment the counter
      int list::get_next()
      {
	 return list_data[next++];
//        throw overflow_error();
      } // end get_next

    // set global persistant counter to the last item in the list
      void list::goto_last()
      {
	 next = how_many - 1;
      } // end goto_last
   
    //local methods
      // find the item and return the location of it
      unsigned short list::find_item(int item)
      {
	 int loc = 0;
	 for(int x = 0; x <= how_many; x++){
	    if(list_data[x] != item)
	       loc++;
	    else if(list_data[x] == item)
	       break;
	 }
	    return(loc);
      } // end _find_item
