#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"\nEnter Number of rows:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
    cout<<"*";
	cout<<"\n";
	}
	return 0;
}
