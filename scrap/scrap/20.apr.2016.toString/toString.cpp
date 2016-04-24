#include <iostream>
#include <string>

using namespace std;

int main()
{
	int usrInput;

	cout << "Please enter an integer: ";
	cin >> usrInput;

	string strInput;

	strInput = to_string(usrInput);

	cout << "Was your number " << strInput << "?" << endl;
	
	return(0);   
}
