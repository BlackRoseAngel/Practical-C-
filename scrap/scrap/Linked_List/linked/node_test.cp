#include <iostream>
#include "list_node.h"

using namespace std;

int main()
{
  list_node n;

  n.put_item("test");
  cout << n.get_item() << endl << endl;
	
  list_node m = n.get_item();
  cout << m.get_item() << endl;
  if (m.get_next())
    cout << "m.next not initialized" << endl;
  else
     cout << "m.next is initialized" << endl;

}
