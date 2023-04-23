#include<iostream>
using namespace std;
int main()
{
	int n,pro=1;
	cout<<"\nEnter Number:";
	cin>>n;
	for( ; n>0; n=n/10)
	pro=pro*(n%10);
	cout<<"Product of digits="<<pro;
	return 0;
}
