#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int myNum [10] =  {2,5,7,13,1,28,9,17,21,4};

int main ()
{
   int arrayPosition = 0;
   int arraySum = 0;
   int arrayAverage = 0;
   int user_input;
   bool inArray;

   // use a loop to sum up all the values in the array
   while (arrayPosition < 10)
   {
      arraySum += myNum[arrayPosition];
      arrayPosition ++;
   } //end while
   cout << arraySum << endl;

   // use a loop to find the average of the values in the array
   arrayPosition = 0;
   while (arrayPosition < 10)
   {
      arrayAverage += myNum[arrayPosition];
      if (arrayPosition == 9)
	 arrayAverage = arrayAverage / (arrayPosition + 1);
      
      arrayPosition ++;
  } //end while
   cout << arrayAverage << endl;

   // use a loop to find a specific value that the user requests and tell the user what position the value is located at or tell the user that the value isn't found
   cout << "Input an integer you would like me to look for in the array: ";
   cin >> user_input;
   arrayPosition = 0;
   while (arrayPosition < 10)
   {
      if (myNum[arrayPosition] == user_input){
	 inArray = true;
         break;
      }
      arrayPosition ++;
   }

   if (inArray == true)
      cout << "Your number " << user_input << " was found at position myNum(" << arrayPosition << ").\n";
   else
      cout << "Your number " << user_input << " was not found in myNum array.\n";

   cout << "got here" << endl;
   return 0;
}
