//C++ program to find sum of first 50 natural numbers
//Fahad Maqbool
//L1S26BSCS0121
//Assignment 01

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 1;i <= 50;i++)
	{
		sum = sum + i;
	}
	cout << "Sum of 1st 50 Natural Numbers: " << sum;
	return 0;
}
