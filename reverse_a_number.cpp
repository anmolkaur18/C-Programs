#include<iostream>
using  namespace std;
int main()
{
	int d,n,r=0;
	cout<<"enter an integer\n";
	cin>>n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		r=r*10+d;
	}
	cout<<"the sum of digits = "<<r;
	return 0;
}
