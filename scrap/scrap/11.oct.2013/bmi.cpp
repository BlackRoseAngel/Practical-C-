#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

int bodyMassIndex;
float height_feet, height_inches, weight;
const int BMI_CONST = 703;
bool loop = 0;
bool goodData (float check);
int BMICalc(float feet, float inches, float weight);
string result(int n);

int main()
{

   cout << "This application will calculator your BMI based upon your given height and weight.\n";

   cout << "Please enter your height in feet and inches with a space sperating them: ";
   cin >> height_feet;

   while (goodData(height_feet) == false){
      cout << "That is an invalid input, please enter a proper height in feet: ";
      cin.clear();
      cin.ignore(50, '\n');
      cin >> height_feet;
      loop = 1;
   } //end while(height_feet)
   
   if (loop == 1){
      cout << "Please enter your inches now: ";
      cin >> height_inches;
   } else
      cin >> height_inches;

   while (goodData(height_inches) == false){
      cout << "This is an invalid input, please enter a proper height in inches: ";
      cin.clear();
      cin.ignore(50, '\n');
      cin >> height_inches;
   } //end while(height_inches)

   cout << "Please enter your weight now: ";
   cin >> weight;

   while (goodData(weight) == false){
      cout << "This is an invalid input, please enter a proper weight in pounds: ";
      cin.clear();
      cin.ignore(50, '\n');
      cin >> weight;
   }//end while(weight)

   bodyMassIndex = BMICalc(height_feet, height_inches, weight);

   cout << result(bodyMassIndex) << endl;

}

bool goodData(float check)
{

   bool dataTest;

   if (!(check) && (check != 0))
      dataTest = false;
   else {
      if ((check < 0))
	 dataTest = false;
      else
	 dataTest = true;
   }

   return(dataTest);
} //end goodData()

int BMICalc(float feet, float inches, float weight)
{
  
   float totalInches, BMI;

   totalInches = (feet * 12) + inches;
   BMI = (weight / pow(totalInches, 2)) * 703;

   return(BMI);

} //end BMICalc()
string result(int n)
{

   string output;
   ostringstream convert;

   convert << n;

   if (n < 20)
      output = "You are underweight at the BMI of " + convert.str() + ", eat a happy meal.";
   else if (n < 26)
      output = "You are normal at the BMI of " + convert.str() + ", don't you feel special.";
   else if (n < 31)
      output = "You are overweight at a BMI of " + convert.str() + ", keep an eye on it.";
   else
      output = "You are obese at a BMI of " + convert.str() + " go start exercising!";

   return(output);
} //end result()
