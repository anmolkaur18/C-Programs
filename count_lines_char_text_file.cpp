#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{   string str;
    int c,l;
    l=c=0;
	ifstream f1;

    f1.open("file.txt");
     
	while(getline(f1,str))
	{ 
	   l++;
	  c+=str.size();
    }
    cout<<" lines "<<l<<endl<<" characters "<<c;
   f1.close();
    
    return 0;
    
}
