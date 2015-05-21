/*
* Question4.cpp
*
*	Name:			[MELARIRI BETHEL UDOCHUKWU]
*	Department:		[STATISTICS]
*	Jamb Reg No:	[47072699DC]
*
* 	Program that inputs a five-digit integer,
*	seperates the integer into its digits and prints them seperated by three spaces 
*
*	Stub file to enable me complete assignment #1 - question #4
*/

#include <iostream>
int main ()
{
	int fivedigits;
	int a,b,c,d,e;
	std::cout << "Enter five digits";
	std::cin >> fivedigits;
	if (fivedigits<10000)
	
	a=(fivedigits/10000);
	b=(fivedigits/1000)%10;
	c= (fivedigits/100)%10;
	d=(fivedigits/10)%10;
	e= fivedigits%10;
	
	std:: cout<<a;
	std:: cout<<"     "<<b;
	std:: cout<<"     "<<c;
	std:: cout<<"     "<<d;
	std:: cout<<"     "<<e;
	return 0;
}
