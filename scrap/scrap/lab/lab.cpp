//************************************
// This program is for CS1300 students.
// The purpose of the program is for them to
// learn about problem solving, data types,
// formatting output
//************************************
#include <iostream>
#include <cmath>
#include <iomanip>
#include <climits>
#include <string>
#include <cctype>

using namespace std;

int y;
int m;
int d; 
int b = INT_MAX;
int a = INT_MIN;
double num = 1000;
double radius;
float aa;
float ba;
char ch;
string firstName = "blaise";
string lastName = "pascal";
string getname;
string firstLast;
string lastFirst;
string name = "John von Neumann";
const int n1 = 1066;
const int n2 = 1492;
const double CIRCUMFERENCE = 10.0;
const char   MIDDLE = 'M';
const string FIRST = "Grace";
const string LAST = "Hopper";
const string TITLE = "Rear Admiral";
int S( int );
int C( int );

int main () 
{

int index;

//Prompts user for input for m, d, and y.
cout << "Enter the month, day, and year in integer form."  << endl;
cin >> m >> d >> y;
cout << m << "/" << d << "/" << y << endl;  

//Upper cases the first letter in lastName and firstName, then outputs the results.
ch = toupper(lastName.at(0));
lastName = ch  + lastName.substr(1, lastName.length());
ch = toupper(firstName.at(0));
firstName = ch + firstName.substr(1, firstName.length());
cout << firstName << " "  << lastName << endl;

//Demonstrates the user of setprecision, and setw.
cout << b << " " << a << endl;
cout << setw(3) << 1776 << ' ' << 44 << endl;
cout << setw(4) << showpoint << num << ' ' << 44.55 << endl;
cout << setprecision(5) << 1776.12 << ' ' << num << endl;
cout << num << endl;

//Uses functions s() and c() to square and cube 27.
cout << "The square of 27 is " << S(27);
cout << " and the cube of 27 is " << C(27) << endl;

//Reorders variable's, assigns them to an identifier, outputs the result.
firstLast = TITLE + " " + FIRST + " " + LAST;
cout << "Name in first-last format is " << firstLast << endl;
lastFirst = LAST + ", " + TITLE + " " + FIRST + ", ";
cout << "Name in last-first-initial format is ";
cout << lastFirst << MIDDLE << '.' << endl;

//Calculates the radius of CIRCUMFERENCE and outputs it.
radius = CIRCUMFERENCE / 2 * 3.14159265;
cout << "The radius is " <<  radius << endl;

//Uses sqrt, pow, and fabs functions.
aa = sqrt(7.3 + fabs(100));
cout << "alpha " << aa;
ba = pow(aa, 2);
cout << setw(3) << n1 << setw(5) << n2 << endl;
cout << n1 << n2;
cout << setw(4) << n1 << setw(6) << n2 << n1 << endl; 

//Finds the spaces in a variable and outputs the pieces.
index = name.find(' ');
cout << "First Name: " << name.substr(0, index) << endl;
name = name.substr(index+1, name.length()-1);
index = name.find(' ');
cout << "Middle Name: " << name.substr(0, index) << endl;
name = name.substr(index+1, name.length()-1);
cout << "Last Name: " << name << endl;

return 0;
}

int S( int n )
{
return n * n;
} //end int S()
 
int C( int n )
{
return n * n * n;
} //end int C()
