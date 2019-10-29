#include<iostream>
#include<stdlib.h>
using  namespace std;
int main()
{
	int n,i,flag=0;
	cout<<"enter a positive number\n";
	cin>>n;
	if(n==1)
	{
		cout<<"it's not a prime no.\n";
		flag=10;
	}
	
	if(flag!=10)
	{
	 for(i=2;i<=n;i++)
	{
		if(n%i==0)
		flag++;
		
	}

if(flag>1)
cout<<"its not a prime no.\n";
else
	cout<<"it's a prime no\n";
}

cout<<"all prime numbers from 2 to less than 100 are\n";
int c=0;
for(i=2;i<100;i++)
{
	for(int j=2;j<=i;j++)
	{
		if(i%j==0)
		c++;
	}
	if(c==1)
	cout<<i<<"  ";
	else ;
}
	return 0;
}
