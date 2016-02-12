//Node Practice
#include<iostream>
using namespace std;


struct node
{
	int num;
	node *link;
};

int main()
{	
	node *laser= new node;
	node *plasma= new node;
	node *fallout= new node;
	node *nuke= new node;
	node *power= new node;
	
	laser -> num=6;
	plasma->num=12;
	fallout->num=33;
	nuke->num=18;
	power->num=42;

	laser-> link=plasma;
	plasma-> link=fallout;
	fallout-> link=nuke;
	nuke-> link=power;
	power-> link=NULL;
	

	int count=1;	

	for(struct node* current = laser; current !=NULL; current = current->link)
	{
		cout<< "Node "<<count<< " is at "<< current << endl;
		cout<< "Data: " << current->num << endl;
		cout<< "Points to " << current->link << endl;
		cout<<endl;
		count++;
	}
	




	
	
return 0;
}
