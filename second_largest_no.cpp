#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,lar1,lar2,lar;
	cin>>t;
	while(t>0)
	{  t--;
	cin>>a>>b>>c;
     if (( a>=b &&  a<=c)||( a<=c && a>=b))
     cout<<a;
    
	else{
	 if ((b>=a && b<=c)||( b<=c&& b>=a)) 
	 cout<<b;
    else
	 cout<<c;}
	
}

	return 0;
}

