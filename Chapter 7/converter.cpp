/**************************************************************************

* Program: Converter

* Created: 16.2.16 ; Modified: 16.2.16

* Version: 1.0

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 7-1 from Practical C++
  Write a program to convert English units to metric (e.g., miles to 
  kilometers, gallons to liters, etc.). Include a specification and a code
  design.

**************************************************************************/
#include <iostream>

using namespace std;

const float kilometers = 1.60934;
const float liters = 3.78541;

void convFeet(float feet);
void convMiles(float miles);
void convGallons(float gallons);
void convCups(float cups);
void convPounds(float pounds);
void convDollars(float dollars);

int main()
{
  float usrInput;
  int usrOpt;
  
  do{
    
    cout << "0. Quit" << endl;
    cout << "1. Feet to Meters" << endl;
    cout << "2. Miles to Kilometers" << endl;
    cout << "3. Gallons to Liters" << endl;
    cout << "4. Cups to Liters" << endl;
    cout << "5. Pounds to Kilograms" << endl;
    cout << "6. Dollars to Pounds" << endl;
    cout << "Please enter the option you'd like: ";
    cin >> usrOpt;
    
    if ((usrOpt > 6) || (usrOpt < 0))
      cout << "That is not an option on the menu, please enter an option on the menu." << endl;
    else if (usrOpt == 1){
      cout << "Please input the number of feet you would like covnerted: ";
      cin >> usrInput;
      convFeet(usrInput);
    } else if (usrOpt == 2) {
      cout << "Please input the number of miles you would like converted: ";
      cin >> usrInput;
      convMiles(usrInput);
    } else if (usrOpt == 3) {
      cout << "Please input the number of gallons you would like converted: ";
      cin >> usrInput;
      convGallons(usrInput);
    } else if (usrOpt == 4) {
      cout << "Please input the number of cups you would like converted: ";
      cin >> usrInput;
      convCups(usrInput);
    } else if (usrOpt == 5) {
      cout << "Plesae input the number of pounds you would like converted: ";
      cin >> usrInput;
      convPounds(usrInput);
    } else if (usrOpt == 6) {
      cout << "Please input the number of dollars you would like converted: ";
      cin >> usrInput;
      convDollars(usrInput);
    }
    
  }while (usrOpt != 0);

  return(0);
} //end main()

void convFeet(float feet)
{
  const float convert = 0.3048;
  float meters = feet * convert;
  
  cout << feet << " feet equal " << meters << " meters." << endl;
  
} //end convFeet()

void convMiles(float miles)
{
  const float convert = 1.60934;
  float kilometers = miles * convert;
  
  cout << miles << " miles equal " << kilometers << " kilometers." << endl;
  
}

void convGallons(float gallons)
{
  const float convert = 3.78541;
  float liters = gallons * convert;
  
  cout << gallons << " gallons equal " << liters << " liters." << endl;
  
}

void convCups(float cups)
{
  const float convert = 0.236588;
  float liters = cups * convert;
  
  cout << cups << " cups equal " << liters << " liters." << endl;
  
}

void convPounds(float pounds)
{
  const float convert = 0.453592;
  float kilograms = pounds * convert;
  
  cout << pounds << " pounds equal " << kilograms << " kilograms." << endl;
  
}

void convDollars(float dollars)
{
  const float convert = 0.70;
  float pounds = dollars * convert;
  
  cout << dollars << " dollars equal " << pounds << " pounds." << endl;
  
}
