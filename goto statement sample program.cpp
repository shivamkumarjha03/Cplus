#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\nEnter Number:";
	cin>>a;
	if(a%2==0)
	goto even;
	else
	goto odd;
	even:
		cout<<"\nThe number is even";
        odd:
	    cout<<"\nOdd Number";
		return 0;		
}
