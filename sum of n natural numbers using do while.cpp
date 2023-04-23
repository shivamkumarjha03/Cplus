#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"\nEnter Number:";
	cin>>n;
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	return 0;
}
