#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	string input;

	cout << "Hellur? ";
	cin >> input;

	input[2] = 'e';
	input[3] = 't';
	input[4] = 't';

	cout << input << endl;

	return(0);
}
