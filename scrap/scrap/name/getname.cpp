#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReturnUpper(string ToConvert);

int main()
{

   string MINIT;
   string FIRST;
   string LAST;

   cout << "First Name: ";
   cin >> FIRST;

   cout << "Middle Initial: ";
   cin >> MINIT;

   cout << "Last Name: ";
   cin >> LAST;

   cout << ReturnUpper(FIRST) << " " << ReturnUpper(MINIT) << ". " << ReturnUpper(LAST) << endl;

return(0);
}

string ReturnUpper(string ToConvert)
{

   transform(ToConvert.begin(), ToConvert.end(), ToConvert.begin(), ::toupper);

   return ToConvert;

}
