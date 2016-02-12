#include <iostream>
#include <string>

using namespace std;

float number;
bool check (float n);

int main()
{
   cout << "Give me a number: ";
   cin >> number;

   while (true) {

      if (check(number) == true){
         cout << "You entered a number." << endl;
         break;
      } else {
         cout << "You entered something else entirely. Try again: ";
	 cin.clear();
	 cin.ignore(1000, '\n');
         cin >> number;
      }
   }

}

bool check(float n)
{
   if (!(n))
      return(false);
   else
      return(true);
}
