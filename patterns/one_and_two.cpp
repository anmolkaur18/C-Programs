#include<iostream>
using namespace std;
int main()
{ int n,i,j;
cin>>n;
cout<<endl;
	for(i=1;i<=n;i++)
	{ for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		cout<<"*";
		cout<<endl;
	}
	return 0;
	
}

