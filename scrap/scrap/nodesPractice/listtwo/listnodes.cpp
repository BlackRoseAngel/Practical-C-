#include "listnodes.h"

//This code is very similar to the file written by Professor Marty Mansfield

//This is the implementation file for listnodes.h


	list_nodes::list_nodes()
	{
		//Creates a uninitialized node so there is nothing in here
	} 


	list_nodes::list_nodes(const list_two &items)
	{

		//Copy constructor - both the string and the pointer

		information = items;
		
		nextnodeinlist = NULL;
	}


	void list_nodes::Put_Items(const list_two &items)
	{
		//Puts the items that is read into by the program into the string information

		information = items;

	}

	void list_nodes::Put_Next_Pointer(list_nodes *Ptr)
	{
		//Transfer the pointer of the information into the nextnodeinlist pointer

		nextnodeinlist = Ptr;	
		
	}


	list_two list_nodes::Get_Items()
	{
		//This returns exactly what is in the string
		
		return information;
	}

	list_nodes::list_nodes *list_nodes::Get_Next_Pointer()
	{

		//This returns exactly what is in the pointer

		return nextnodeinlist;
	}

	  	
