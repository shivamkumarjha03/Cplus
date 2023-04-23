#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter Number:";
	cin>>n;
	for(; n>=1;n--)
	fact=fact*n;
	cout<<"Factorial="<<fact;
	return 0;
}
