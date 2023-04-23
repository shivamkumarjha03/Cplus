#include<iostream>
using namespace std;
int main()
{
	int n,i=1,j;
	cout<<"\nEnter Number of rows:";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}
