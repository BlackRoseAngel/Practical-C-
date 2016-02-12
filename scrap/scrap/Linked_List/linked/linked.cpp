#include <iostream>


using namespace std;

struct node;

typedef struct node
	{
   		long long int data;
   		node *next;
	};

int main ()
{
  node *list;

  list = new(node);
  list.data = 0;
  list.next = NULL;
  cout << list -> data << endl;


}
