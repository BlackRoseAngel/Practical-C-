/******************************************************
* Nathan                                              *
* nalinder                                            *
* CS1300 Project 3  Math And Such                     *
* Due Date: 11/9/2013                                 *
*                                                     *
* A program that displays the order of the taylor     *
* series needed to accurately apporximate cos         *
*******************************************************/
#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
float convert(float deg)
{
	float rad=0;
	rad = (deg*3.14)/180.0;
	return rad;
}
float factorial(int base)
{
	float fact=1.0;
	for(int i=1; i<=base; i++)
	{
		fact=fact*i;
	}
	return fact;
}
float second(float radian) // Function used to determine the order needed for 10^-2
{
	float real=cos(radian);
	float approx=1.0;
	float order=1.0;
	while(!(real - .1 < approx && real + .1 > approx))
	{
		approx  += pow (-1,(order)) * ((pow( radian, 2*order))/(factorial(2*order)));
		order+=1;
	}
	return order-1;
}
float third(float radian) // Used to determine order needed for 10^-3
{	
	float real=cos(radian);
	float approx=1.0;
	float order=1.0;
        while(!(real - .01< approx && real + .01 > approx))
        {
                approx  += pow (-1,(order)) * ((pow( radian, 2*order))/(factorial(2*order)));
		order+=1;
        }
	return order-1;
}
float fourth(float radian) // Used to determine order needed for 10^-4
{
	float real=cos(radian);
	float approx=1.0;
	float order=1.0;
        while(!(real - .001 < approx && real + .001 > approx))
        {
                approx  += pow (-1,(order)) * ((pow( radian, 2*order))/(factorial(2*order)));
		order+=1;
        }
	return order-1;
}
int main()
{
	ifstream inData;
	
	float a, b, c, d; //variables to store the degrees.
	float e, f, g, h; //variables to store the radians.
	float cos1, cos2, cos3, cos4, cos5, cos6, cos7, cos8, cos9, cos10, cos11, cos12; //order needed to get the approximation
	
	inData.open("degrees.txt");

	inData >> a;
	inData >> b;
	inData >> c;
	inData >> d;

	e = convert(a);
	f = convert(b);
	g = convert(c);
	h = convert(d);
	
	cos1=second(e);
	cos2=third(e);
        cos3=fourth(e);
        cos4=second(f);
        cos5=third(f);
        cos6=fourth(f);
        cos7=second(g);
        cos8=third(g);
        cos9=fourth(g);
        cos10=second(h);
        cos11=third(h);
        cos12=fourth(h);
        
	cout << "Angle		10^-2		10^-3		10^-4" << endl;
	cout << "____________________________________________________" << endl;
	cout << a << "		" << cos1 << "		" << cos2 << "		" << cos3 << endl;
	cout << b << "		" << cos4 << "		" << cos5 << "		" << cos6 << endl;
	cout << c << "		" << cos7 << "		" << cos8 << "		" << cos9 << endl;
	cout << d << "		" << cos10 << "		" << cos11 << "		" << cos12 << endl;
	inData.close();
}
