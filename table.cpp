#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"Enter Number to fnd table:";
	cin>>i;
	j=1;
	while(j<=100)
	{
		cout<<"\n"<<i*j;
		j++;
	}
	return 0;
}
