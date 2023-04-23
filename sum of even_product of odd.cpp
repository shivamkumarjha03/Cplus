#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,pro=1,i;
	cout<<"Enter number:";
	cin>>n;
	while(n>0)
	{
		i=n%10;
		if(i%2==0)
		sum=sum+i;
		else
		pro=pro*i;
		n=n/10;
	}
	cout<<"Sum of even="<<sum;
	cout<<"\nProduct of odd="<<pro;
	return 0;
}
