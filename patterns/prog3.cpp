#include<iostream>
using  namespace std;
int main()
{
	float s=0;
	int n,i;
	cout<<"enter the number of terms\n";
	cin>>n;
	for(i=1;i<=n;i++)
{
	s+=(1.0/i);
}
	cout<<"the sum of series = "<<fixed<<s;
	return 0;
} 





