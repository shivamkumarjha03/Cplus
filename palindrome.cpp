#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,rev=0,n;
	n=i;
	cout<<"Enter Number:";
	cin>>i;
	while(i>0)
	{
		rev=(rev*10)+(i%10);
		i=i/10;
	}
	if(n==rev)
	cout<<"Palindrome number";
	else
	cout<<"Not palindrome number";
	return 0;
}
