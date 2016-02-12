/***************************************************************************

* Program: Checker Board

* Created: 9.23.13 ; Modified: 9.23.13

* Version: 0.1

* Creator: Brett Chapin

* Purpose: This program will display, a checker board lay out, with my first
  initial.

***************************************************************************/

#include <iostream>
#include <string>

using namespace std;

const string CPONE = " B B B B";
const string CPTWO = "B B B B ";
const string BLANK = "        ";

int main() {

   // Declaring Variables that will have the proper print of the checker board pattern
   string BlackRowOne = CPONE + BLANK + CPONE + BLANK + CPONE + BLANK + CPONE + BLANK;
   string BlackRowTwo = CPTWO + BLANK + CPTWO + BLANK + CPTWO + BLANK + CPTWO + BLANK;
   string WhiteRowOne = BLANK + CPONE + BLANK + CPONE + BLANK + CPONE + BLANK + CPONE;
   string WhiteRowTwo = BLANK + CPTWO + BLANK + CPTWO + BLANK + CPTWO + BLANK + CPTWO;
   
   // Prints row one, of the checker board.
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;

   // Prints row two, of the checker board.
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;

  // Prints row three, of the checker board.
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;

  // Prints row four, of the checker board.
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;

  // Prints row five, of the checker board.
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;

  // Prints row six, of the checker board.
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;

   // Prints row seven, of the checker board.
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;
   cout << WhiteRowTwo << endl;
   cout << WhiteRowOne << endl;

   // Prints row eight, of the checker board.
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;
   cout << BlackRowTwo << endl;
   cout << BlackRowOne << endl;


  return(0);

} //end main
