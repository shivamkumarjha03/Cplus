#include<iostream>
using namespace std;
int main()
{
	int n,i,j,b;
	cout<<"\nEnter Number of rows:";
	cin>>n;
	while(i<=n)
	{
		b=1;
		while(b<=n-i)
		{
			cout<<" ";
			b++;
		}
		j=1;
		while(j <= 2*i-1)
		{
			cout<<"*";
			j++;
		}
		cout<<"\n";
		
		i++;
	}
	return 0;
}
