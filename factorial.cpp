#include<iostream>
using namespace std;
int main()
{
	int i,fact=1;
	cout<<"Enter Number:";
	cin>>i;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	cout<<"Factorial of the number="<<fact;
	return 0;
}
