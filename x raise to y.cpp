#include<iostream>
using namespace std;
int main()
{
	int x,y,z=1,pro=1;
	cout<<"Enter values of x and y:";
	cin>>x>>y;
	while(z<=y)
	{
		pro=pro*x;
		z++;
	}
	cout<<"X raise to power y="<<pro;
	return 0;
}
