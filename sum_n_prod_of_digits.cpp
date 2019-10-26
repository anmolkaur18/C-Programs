#include<iostream>
using  namespace std;
int main()
{
	int d,n,s=0,p=1;
	cout<<"enter an integer\n";
	cin>>n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		s+=d;
		p*=d;
	}
	cout<<"the sum of digits = "<<s<<endl<<"the products of digits is = "<<p;
	return 0;
}
