/**************************************************************************

* Program: Resistance

* Created: 29.2.16 ; Modified: 27.4.16

* Version: 3.11

* Creator: Brett Chapin(bachapin)

* Purpose: This is exercise 8-2 from Practical C++
  Write a program to compute the total resistance for any number of 
  parallel resistors.

**************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int gcd(int compA, int compB);
int multiplier(int lowestCommonMultiple, int multiple);

typedef struct node
{
	int numerator;
	int denominator;
	node *next;
};

int main()
{
	node *head = NULL;
    int info = 0, counter = 0, lcm = 0;

	cout << "Please input the denominator for the resistance of your circuit (0 terminates): ";
	do
	{
		if(counter != 0) //If this isn't the first entry, displays different output
			cout << "Please enter another resistance: ";

		cin >> info;

		if(info != 0) {
			if(head==NULL){
				node *temp = new node;
				temp->numerator = 1;
				temp->denominator = info;
				temp->next = NULL;
				head = temp;
				counter++;
				delete temp;
			} else {
				node *temp1 = new node;
				temp1 = head;
				while(temp1->next != NULL)
					temp1 = temp1->next;

				node *temp = new node;
				temp->numerator = 1;
				temp->denominator = info;
				temp->next = NULL;
				temp1->next = temp;
				counter++;
				delete temp;
			}
		}

	} while(info != 0); //end do-while loop

	//This calculates the LCM of all input variables.
	node *temp = new node;
	temp = head;
	int tempCount = 0;

	if(temp == NULL)
	{
		cout << "You didn't input any resistances!" << endl;
	} else {
		while(temp != NULL)
		{
			if(tempCount == 0)
			{
				lcm = temp->denominator * temp->next->denominator / gcd(temp->denominator,
						temp->next->denominator);
				temp = temp->next;
				temp = temp->next;
				tempCount = 3;
			} else {
				lcm = temp->denominator * lcm / gcd(temp->denominator, lcm);
				temp = temp->next;
				tempCount++;
			}
		}
		delete temp;
	}

	//This will calculate the numerator for all the entries.
	node *temp1 = new node;
	temp1 = head;
	int runningNumerator = 0;

	while(temp1 != NULL)
	{
		runningNumerator += multiplier(lcm, temp1->denominator);
		temp1 = temp1->next;
	} //end while loop


	//Outputs the resistance of your circuits.
	float finalResis = 0.0;
	finalResis = ((float)(lcm) / (float)(runningNumerator));
	cout << "This resistance of your parallel circuits is " << setprecision(4) << finalResis << endl;
	delete temp1;


    return(0);
} //end main()

int gcd(int compA, int compB)
{
    if (compB == 0)
      return (compA);
    else
      return (gcd(compB, compA % compB));
} //end gcd()

int multiplier(int lowestCommonMultiple, int multiple)
{
	if (multiple == lowestCommonMultiple)
		return(1);
	else
		return(lowestCommonMultiple / multiple);
} //end multiplier()
