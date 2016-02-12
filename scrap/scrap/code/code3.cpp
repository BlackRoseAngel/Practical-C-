#include <iostream>

using namespace std;

int main()
{
   const int DAYS = 73;
   int days, weeks;

   weeks = DAYS / 7;
   days = DAYS % 7;

   cout << "There are " << weeks << " weeks, and " << days << " days in " << DAYS << " days." << endl;

   return(0);
}
