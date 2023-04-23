#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=1,z=0,count=1;
	cout<<"\nEnter Number:";
	cin>>n;
	while(count<=n)
	{
		cout<<"\n"<<z;
		x=y;
		y=z;
		z=x+y;
		count++;
	}
	return 0;
}
