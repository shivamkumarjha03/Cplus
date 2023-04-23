#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,pro=1,i;
	cout<<"Enter Number:";
	cin>>n;
	for(; n>0; n=n/10)
	{
		i=n%10;
		if(i%2==0)
		sum=sum+i;
		else
		pro=pro*i;
	}
	cout<<"Sum of even="<<sum;
	cout<<"\nProduct of odd="<<pro;
	return 0;
	
}
