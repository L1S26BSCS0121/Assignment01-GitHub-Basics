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