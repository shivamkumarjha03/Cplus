#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<"Maximum Number="<<a;
	else if(b>a && b>c)
	cout<<"Maximum Number="<<b;
	else
	cout<<"Maximum Number="<<c;
	return 0;
}
