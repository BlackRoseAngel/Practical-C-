// test the node class where data is a string

#include <iostream>
#include <string>
#include "list_node.h"

   using namespace std;

   int main()
   {
      list_node n;
      string data = "This is a string.";
   
      n.put_item(data);
      cout << n.get_item() << endl;
      if (n.get_next() == NULL)
         cout << "n.next initialized" << endl;
      else
         cout << "n.next is not initialized" << endl;
   
   
      list_node m = n.get_item();
   
      m.put_next(&n);
      cout << m.get_item() << endl;
      if (m.get_next() != NULL)
         cout << "m.next initialized" << endl;
      else
         cout << "m.next is not initialized" << endl;
			
		cout << m.get_next() << " " << &n << endl;
   }
