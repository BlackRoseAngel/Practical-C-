#include <iostream>
#include <string>
#include "node_temp.h"

   using namespace std;

   int main()
   {
      node_temp<string> str_node;
      node_temp<int> int_node;
   
      if (str_node.get_next() == NULL)
         cout << "s.next initialized" << endl;
      else
         cout << "str_node.next is not initialized" << endl;
      cout << "str_node.data is \"" << str_node.get_item() << "\"" << endl;
     
      str_node.put_item("this is a test");
      cout << "s is now \"" << str_node.get_item() << "\"" << endl << endl;
   
      node_temp<string> newstr_node = str_node.get_item();
   
      cout << "newstr_node.data is \"" << newstr_node.get_item() << "\"" << endl;
      if (newstr_node.get_next() == NULL)
         cout << "newstr_node.next initialized" << endl << endl;
      else
         cout << "newstr_node.next is not initialized" << endl << endl;
   	 
      int_node.put_item(12345);
      cout << "int_node.data is " << int_node.get_item() << endl;
      int_node.put_item(int_node.get_item() * 2);
      cout << "int_node.data is now " << int_node.get_item() << endl;
   }
