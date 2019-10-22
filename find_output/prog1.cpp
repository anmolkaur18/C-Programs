#include<iostream>
using namespace std;
int main()
{
	int n1=1;
	int n2=++n1;
	int n3=++ ++n1;
	int n4=n1++;
	cout<<"n1="<<n1<<endl;
	cout<<"n2="<<n2<<endl;
	
	cout<<"n3="<<n3<<endl;
	
	cout<<"n4="<<n4<<endl;
	return 0;
}
