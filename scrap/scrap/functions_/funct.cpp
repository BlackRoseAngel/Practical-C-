//to guess what we are doing :)

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cctype>

using namespace std;

//global
int x = 9;
int y = 4;
void DoThis(int& x, int& y);
int DoThat(int x, int y);

//main
int main ()
   {

      cout << x << endl;
      cout << y << endl; 
      DoThis(x,y);
      cout << y <<endl;
      cout << "The sum of x and y is " << DoThat(x, y) << endl;
      cout << "end of program" << endl;
      return 0;
   }
   
   //****************************************************
 void DoThis(int& x, int& y)
   
    {
      x = 3;
      y = 7;
      cout << "this is x " << x  << endl;
      cout << "this is y " << y << endl;
    }

int DoThat(int x, int y)
{
      return(x + y);
}
