// some simple pointer examples
// Martin F Mansfield
// last modified: 9/12/2012

#include <iostream>

   using namespace std;

   int main()
   {
      int *p, *q; // declare two pointer variables
   
      p = NULL; // set the variable to the null value
      cout << "p is NULL " << p << endl;
   	
      p = new int; // assign a memory location to p
      *p = 10; // assign a value to the memory location
      cout << "*p = "<< *p << " p = " << p << endl;
   	
      q = new int; // repeat for q
      *q = *p;
      cout << "*q = " << *q << " q = " << q << endl;
   
      q = p;
      *q = 15;
      cout << "now *p = " <<  *p << " and p = " << p << endl;
      cout << "now *q = " << *q << " and q = " << q << endl;
      
      cout << endl << "deleting q" << endl;
      delete q; // deallocate the memory associated with q
   
       cout << "try to assign NULL to q" << endl;
       //q = NULL; // see the program fail
       cout << "assigned NULL to q" << endl;
      *p = 20;
   	 delete p;
      
      cout << "*q = " << *p << " q = " << p << endl;
   }
