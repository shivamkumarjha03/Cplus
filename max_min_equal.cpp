#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	if(a>b)
	cout<<"Maximum number="<<a;
	else if(b>a)
	cout<<"Minimum number="<<b;
	else
	cout<<"Both number are equal";
	return 1;
}
