#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=1,z=0;
	cout<<"\nEnter Number:";
	cin>>n;
	while(z<=n)
	{
		cout<<"\n"<<z;
		x=y;
		y=z;
		z=x+y;
	}
	return 0;
}
