/*************************************************************************

* Program: Linked List

* Created: 4.10.14 ; Modified: 4.16.14

* Due Data: 4.16.14

* Version: 2.4

* Creator: Brett Chapin(bachapin)

*************************************************************************/

#include <iostream>

using namespace std;

typedef struct node
{
   int data;
   node *next;
};

int main()
{
   node *head = NULL; //empty linked list
   int info = 0, node_number = 0, counter = 0;
   char ch;

   do{
      cout << "0.Quit" << endl;
      cout << "1.Insert at first" << endl;
      cout << "2.Traverse" << endl;
      cout << "3.Insert at last" << endl;
      cout << "4.Insert after specified number of node" << endl;
      cout << "5.Delete at first node" << endl;
      cout << "6.Delete at last node" << endl;
      cout << "7.Delete specified number of node" << endl;
      cout << "8.Clear List" << endl;
      cout << "9.Sort nodes" << endl;

      cout << "Enter your choice: ";
      cin >> ch;

      switch(ch)
      {
	 case '0': break;
	 case '1':{ //insert at first
		     cout <<"ENTER ANY NUMBER: ";
		     cin >> info; //take input data

		     cout << "Input data: " << info << " Node No: " << ++counter << endl;

		     node *temp; //create a temporary node

		     temp = (node*)malloc(sizeof(node)); //allocate space for node

		     temp->data = info; //store data(first field)
		     temp->next = head; //store the address of the pointer head(second field)
		     head = temp; //transfer the address of 'temp' to 'head'

		     cout << endl;
		     break;
		  }

	 case '2':{ //traverse
		     node *temp1; //create a temporary node
		     temp1 = head; //transfer the address 'head' to 'temp'

		     if(temp1 == NULL){
			cout << endl;
			break;
		     } else {
			cout << "Linked list: ";
			while(temp1 != NULL){
			   cout << temp1->data << " "; //show the data in the linked list
			   temp1 = temp1->next; //transfer the address of 'temp->next' to 'temp'
			}
			
			cout << endl << "Number of nodes: " << counter << endl;
			cout << endl;
			break;
		  }
		  }

	 case '3':{ //Insert at last
		     if(head == NULL){ //check linked list is empty
			cout << "ENTER ANY NUMBER: ";
			cin >> info;

			cout << "Input data: " << info << endl;
		        
			node *temp;

			temp = (node*)malloc(sizeof(node)); //allocate space for node

			temp->data = info;
			temp->next = NULL;
			head = temp;

			counter++;
		     } else{
			cout << "ENTER ANY NUMBER: ";
			cin >> info; //take input data

			cout << "Input data: " << info << endl;
			node *temp1; //create a temporary node

			temp1 = (node*)malloc(sizeof(node)); //allocate space for node

			temp1 = head; //transfer the address of 'head' to 'temp'

			while(temp1->next != NULL) //go to the last node
			   temp1 = temp1->next; //transfer the address of 'temp->next' to 'temp'

			node *temp;

			temp = (node*)malloc(sizeof(node)); //allocate space for node

			temp->data = info;
			temp->next = NULL;
			temp1->next = temp;

			cout << endl;
			break;
		     }
		  }

	 case '4':{ //Insert after specified number of node
		     //check linked list is empty
		     if(head == NULL){
			cout << "The Linked List is empty" << endl;
			break;
		     }

		     cout << "ENTER ANY NUMBER: ";
		     cin >> info; //take input data
		     cout << "Input data: " << info << endl;
		     cout << "ENTER THE NODE NUMBER: ";
		     cin >> node_number; //take the node number from user

		     node *temp1; //create a temporary node
		     temp1 = (node*)malloc(sizeof(node)); //allocate space for node
		     temp1 = head;

		     for(int i = 1; i < node_number; i++)
		     {
			temp1 = temp1->next; //go to next node
			if(temp1 == NULL){
			   cout << node_number << " node does not exist" << endl;
			   break;
			}
		     }

		     node *temp; //create temporary node
		     temp = (node*)malloc(sizeof(node)); //allocate space for node
		     temp->data = info; //store data(first field)
		     temp->next = temp1->next; //transfer the address of temp1->next to temp->next
		     temp1->next = temp; //transfer the address of temp to temp1->next

		     counter++;
		     break;
		  }

	 case '5':{ //delete at first node
		     if(head == NULL){
			cout << "The Linked List is empty" << endl;
			break;
		     } else
			if (head->next == NULL){
			   head = NULL;
			   cout << "The first node of the Linked List is deleted" << endl;
			   cout << "The Linked List is empty" << endl;

			   counter--;
			   break;
			}

		     node *temp; //create a temporary node
		     temp = (node*)malloc(sizeof(node)); //allocate space for node
		     temp = head; //transfer the address of 'head' to 'temp'
		     head = temp->next; // transfer the address of 'temp->next' to 'head'
		     free(temp);

		     cout << "The first ndoe of the Linked List is deleted" << endl;
		     counter--;
		     break;
		  }

	 case '6':{ //delete at last node
		     if(head == NULL){
			cout << "The Linked List is empty" << endl;
			break;
		     } else
			if(head->next == NULL){
			   head = NULL;
			   cout << "The last node of the Linked List is deleted" << endl;
			   cout << "The Linked List is empty" << endl;
			   counter--;
			   break;
			}

		     node *temp1; //create a temporary node
		     temp1 = (node*)malloc(sizeof(node)); //allocate space for node
		     temp1 = head;

		     node *old_temp; //create a temporary node
		     old_temp = (node*)malloc(sizeof(node)); //allocate space for node

		     while(temp1->next != NULL){ //go to the last node
			old_temp = temp1; //transfer the address of 'temp1' to 'old_temp'
			temp1 = temp1->next; //transfer the address of 'temp1->next' to 'temp1'
		     }

		     old_temp->next = NULL; //previous node of the last node is null

		     free(temp1);
		     cout << "The last node of the Linked List is deleted" << endl;
		     break;
		  }

	 case '7':{ //delete specified number of node
		     //check if link list is empty
		     if(head == NULL){
			cout << "The Linked List is empty" << endl;
		     } else
			if(head->next == NULL){
			   head = NULL;
			   cout << "The last node of the Linked List is deleted" << endl;
			   cout << "The Linked List is Empty" << endl;

			   counter--;
			   break;
			}

		     cout << "ENTER THE NODE NUMBER: ";
		     cin >> node_number; //take location

		     //Check if node exists
		     if(node_number > counter){
			cout << "No such node exists";
			break;
		     }

		     node *temp1; //create a temporary node
		     temp1 = (node*)malloc(sizeof(node)); //allocate space for node
		     temp1 = head; //transfer the address of 'head' to 'temp1'

		     node *old_temp; //create temporary node
		     old_temp = (node*)malloc(sizeof(node)); //allocate space for node
		     old_temp = temp1; //transfer the address of 'temp1' to 'old_temp'

		     //check node number is 1
		     if(node_number == 1){
			head = temp1->next; //transfer the address of 'temp1->next' to 'head'
			free(temp1);
			counter--;
			   cout << node_number << " node of the Linked List is deleted" << endl;
			   break;
			}

			//go to the node number of the node
			for(int i = 1; i < node_number; i++)
			{
			   old_temp = temp1; //store previous node
			   temp1 = temp1->next; //store current node
			}

			old_temp->next = temp1->next; //transfer the address of 'temp1->next' to 'old_temp->next'
			free(temp1);

			counter--;
			cout << node_number << " node of the Linked List is deleted" << endl;
			break;
		     }

	    case '8':{ //clear list
			head = NULL;
			cout << "Linked List has been cleared" << endl;
			counter = 0;
		     }

	    case '9':{ //sort nodes
			node *temp1; //create a temporary node
			temp1 = (node*)malloc(sizeof(node)); //allocate space for node

			node *temp2; //create a temporary node
			temp2 = (node*)malloc(sizeof(node)); //allocate space for node

			int temp = 0;

			for (temp1 = head; temp1 != NULL; temp1 = temp1->next)
			{
			   for(temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
			   {
			      if(temp1->data > temp2->data){
				 temp = temp1->data;
				 temp1->data = temp2->data;
			         temp2->data = temp;
			   }
			}
		     }

		     cout << "Nodes of the Linked List are sorted" << endl << endl;
		     break;
		  }

      }
      }while(ch != '0');

   return(0);
}
