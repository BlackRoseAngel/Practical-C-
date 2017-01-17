/**************************************************************************

* Program: Enhanced Number Converter

* Created: 1.16.17 ; Modified: 1.17.17

* Version: 0.5

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-7 from Practical C++
  The number 85 is said "eighty-five", not "eight five." Modify the previ-
  ous program to handle the numbers 0-100 so all numbers come out as we
  really say them. For example, 13 is "thirteen," and 100 is "one hundred."

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string Number(string input);
string twoElement(string input);
string singleElement(char input);
string teenElement(char input);

int main()
{
	int input;

	cout << "Please enter a number 0 to 100: ";
	cin >> input;

	string strInput = to_string(input);

	cout << Number(strInput) << endl;

    return(0);
} //end main()

string Number(string input){
	string output;

	if(input.size() == 3){
		output = "One hundred";
		return (output);
	} else if(input.size() == 2){
		output = twoElement(input);
		return (output);
	} else if(input.size() == 1){
		output = singleElement(input[0]);
		return(output);
	}
} //end Number()

string twoElement(string input){
	string output;

	switch(input[0]){
		case '1': {
						switch(input[1]){
							case '0': output = "Ten"; break;
							case '1': output = "Eleven"; break;
							case '2': output = "Twelve"; break;
							default: output = teenElement(input[1]) + "teen"; break;
						}
						break;
				  }
		case '2': {
					  if(input[1] == '0'){
							output = "Twenty"; break;
					  }else{
					  	 	output = "Twenty-" + singleElement(input[1]); break;
					  }
				  }
		case '3': {
					  if(input[1] == '0'){
							output = "Thirty"; break;
					  }else{
					  		output = "Thirty-" + singleElement(input[1]); break;
					  }
				  }
		case '4': {
					  if(input[1] == '0'){
						  	output = "Forty"; break;
					  }else{
					  		output = "Forty-" + singleElement(input[1]); break;
					  }
				  }
		case '5': {
					  if(input[1] == '0'){
						  	output = "Fifty"; break;
					  }else{
					  		output = "Fifty-" + singleElement(input[1]); break;
					  }
				  }
		case '6': {
					  if(input[1] == '0'){
						  	output = "Sixty"; break;
					  }else{
					  		output = "Sixty-" + singleElement(input[1]); break;
					  }
				  }
		case '7': {
					  if(input[1] == '0'){
						  	output = "Seventy"; break;
					  }else{
					  		output = "Seventy-" + singleElement(input[1]); break;
					  }
				  }
		case '8': {
					  if(input[1] == '0'){
						  	output = "Eighty"; break;
					  }else{
					  		output = "Eighty-" + singleElement(input[1]); break;
					  }
				  }
		case '9': {
					  if(input[1] == '0'){
						  	output = "Ninety"; break;
					  }else{
					  		output = "Ninety-" + singleElement(input[1]); break;
					  }
				  }
	}

	return (output);
} //end twoElement()

string singleElement(char input){
	string output;

    switch(input) {
        case '1': output = "One"; break;
        case '2': output = "Two"; break;
        case '3': output = "Three"; break;
        case '4': output = "Four"; break;
        case '5': output = "Five"; break;
        case '6': output = "Six"; break;
        case '7': output = "Seven"; break;
        case '8': output = "Eight"; break;
        case '9': output = "Nine"; break;
        case '0': output = "Zero"; break;
    }

	return (output);
} //end singleElement()

string teenElement(char input){
	string output;
	
	switch(input){
		case '3': output = "Thir"; break;
		case '4': output = "Four"; break;
		case '5': output = "Fif"; break;
		case '6': output = "Six"; break;
		case '7': output = "Seven"; break;
		case '8': output = "Eigh"; break;
		case '9': output = "Nine"; break;
	}

	return (output);
} //end teenElement()
