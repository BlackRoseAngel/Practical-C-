/**************************************************************************

* Header File: stacks.h

* Created: 4.21.14 ; Modified: 4.21.14

* Version: 1.3

* Creator: Brett Chapin(bachapin)

**************************************************************************/
#ifndef STACKS_H

class stacks
{
   public:
      //Constructors
      stacks();

      //Transformers
      void push(int input);
      void pop(char input);
      void empty();

      //Observers
      int stacka_size();
      int stackb_size();
      int stack_size();
      bool is_full();
      bool is_empty();
      bool usable_input(int num);
      bool over_thousand(int num);

      //Iterators
      int get_item(int num);

      static unsigned short const MAX = 200;

   protected:
      //Data Members

      int data[MAX];
      unsigned short stackSize;
      unsigned short STACKA;
      unsigned short STACKB;

}; //end class 

#define STACKS_H
#endif
