#include <iostream>
#include "list_node.h"

   using namespace std;

   int main()
   {
      list_node n;
   
      n.put_item(6.89);
      cout << n.get_item() << endl << endl;
   
      list_node m = n.get_item();
      cout << m.get_item() << endl;
      m.put_next(&n);
      if (m.get_next())
         cout << "m.next not NULL" << endl;
      else
         cout << "m.next is NULL" << endl;
      if (NULL)
         cout << "NULL is true" << endl;
      else
         cout << "NULL is false" << endl;
   
   }
