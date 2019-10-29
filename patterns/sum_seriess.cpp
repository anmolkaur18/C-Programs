#include<iostream>
using  namespace std;
int main()
{
	float s=0.0;
	int n,i,sign=1;
	cout<<"enter the number of terms\n";
	cin>>n;
	for(i=1;i<=n;i++)
{   
    s+=i*sign;
    sign*=-1;
}
	cout<<"the sum of series = "<<s;
	return 0;
} 





