#include <iostream>
#include <string>
#include "linked_list.cpp"

   using namespace std;

   typedef linked_list<string> linked_str;
   typedef linked_list<int> linked_int;
 
   void print(linked_str lst)
   {
      int count = 1;	// keep track of number of data 
   	
      lst.move_to_start();	// begin at start of list
      cout << endl;	// start on a new line on the screen
   
   // as long as there are more nodes
      while (! lst.at_end())
      {
         cout.width(14);
      	// decide when to print an end of line
         if (count++ % 5 != 0)
            cout << lst.get_cur();
         else
            cout << lst.get_cur() << endl;
         lst.move_to_next();
      }
      cout.width(14);
      cout << lst.get_cur() << endl;
   }

   void print(linked_int lst)
   {
      int count = 1;	// keep track of number of data 
   	
      lst.move_to_start();	// begin at start of list
      cout << endl;	// start on a new line on the screen
   
   // as long as there are more nodes
      while (! lst.at_end())
      {
         cout.width(14);
      	// decide when to print an end of line
         if (count++ % 5 != 0)
            cout << lst.get_cur();
         else
            cout << lst.get_cur() << endl;
         lst.move_to_next();
      }
      cout.width(14);
      cout << lst.get_cur() << endl;
   }

   int main ()
   {
      linked_str s;
      linked_int l;
   
      string data = "ABC ";
   
      for (int i = 65; i < 85; i++)
         l.append(i);
      print(l);
      cout << endl << "reversed list" << endl;
      l.reverse();
      print(l);
      for (char c = 68; c < 78; c++)
         s.append(data + c);
      print(s);
      cout << endl << "reversed list" << endl;
      s.reverse();
      print(s);
      cout << endl << "reversed reversed list" << endl;
      s.reverse();
      print(s);
      cout << "done" << endl;
   }

