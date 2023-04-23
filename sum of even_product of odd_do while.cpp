#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,pro=1,i;
	cout<<"Enter Number:";
	cin>>n;
	do
	{
		i=n%10;
		if(i%2==0)
		sum=sum+i;
		else
		pro=pro*i;
		n=n/10;
	}while(n>0);
	cout<<"Sum of even="<<sum;
	cout<<"Product of odd="<<pro;
	return 0;
}
