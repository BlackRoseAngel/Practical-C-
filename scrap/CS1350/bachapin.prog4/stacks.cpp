/**************************************************************************

* Class File: stacks.cpp

* Created: 4.21.14 ; Modified: 4.21.14

* Version: 1.2

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#include "stacks.h"

//Constructors
stacks::stacks()
{
   stackSize = 0;
   STACKA = 0;
   STACKB = 199;
} //end stacks()

//Transformers
void stacks::push(int input)
{
   if(over_thousand(input) == true && is_full() == false){
      data[STACKA] = input;
      STACKA++;
   } else{
      data[STACKB] = input;
      STACKB--;
   }
   stackSize++;
} //end push

void stacks::pop(char input)
{
   if(input == 'a')
      STACKA--;
   else if(input == 'b')
      STACKB++;

   stackSize--;
} //end pop

void stacks::empty()
{
   stackSize = 0;
   STACKA = 0;
   STACKB = 199;
} //end empty

//Observer
int stacks::stacka_size()
{
   return(STACKA);
} //end get_stacka_size

int stacks::stackb_size()
{
   return(199 - STACKB);
} //end get_stackb_size

int stacks::stack_size()
{
   return(stackSize);
} //end get_stack_size

bool stacks::is_full()
{
   if(stackSize == 200)
      return(true);
   else
      return(false);
} //end is_full

bool stacks::is_empty()
{
   if(stackSize == 0)
      return(true);
   else
      return(false);
} //end is_empty

bool stacks::usable_input(int num)
{
   if(num > 0)
      return(true);
   else
      return(false);

} //end usable_input

bool stacks::over_thousand(int num)
{
      if(num < 1000)
	 return(true);
      else
	 return(false);
} //over_thousand

//Iterators
int stacks::get_item(int num)
{
   return(data[num]);
} //end get_item
