#include<iostream>
using namespace std;
int main()
{
	int i,rev=0;
	cout<<"\nEnter Number:";
	cin>>i;
	for(;i>0;i=i/10)
	rev=(rev*10)+(i%10);
	cout<<"\nReverse of the number="<<rev;
	return 0;
}
