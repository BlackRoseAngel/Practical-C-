#ifndef LISTNODES_H
#include "listtwo.h"

class list_nodes
{
public:
	list_nodes();
	
	list_nodes(const list_two &items); //construct a node with data and a pointer to initialized to NULL

	void Put_Items(const list_two &items); // allows client to place a value in the node

	void Put_Next_Pointer(list_nodes *Ptr); //allows clent to place a pointer in the node	

	list_two Get_Items(); // returns the data from a node

	list_nodes *Get_Next_Pointer(); //returns the pointer from a node

	protected:

		list_two information; // list_two defined in list_two.h

		list_nodes *nextnodeinlist; // points to the next node in the list
};

#define LISTNODES_H
#endif
