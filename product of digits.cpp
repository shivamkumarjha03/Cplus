#include<iostream>
using namespace std;
int main()
{
	int n,pro=1;
	cout<<"Enter number:";
	cin>>n;
	while(n>0)
	{
		pro=pro*(n%10);
		n=n/10;
	}
	cout<<"\n Product of digits="<<pro;
	return 0;
}
