#include<iostream>
using namespace std;
 
 void search_array(string s, char c)
 {  int i, co=0;
 	for( i=0;i<s.length();i++)
 	{
 		
 		if(s[i]==c)
 		co++;
	}
	cout<<c<<"\t\t"<<co<<endl;	
 }
 
 
int main(int argc , char* argv[])
{   
    int k=0;
	if(argc!=2)
		cout<<"invalid arguments\n";
	else
	    {   cout<<"character\toccurence\n";
	    	string s=argv[1];
	    	string s2=argv[1];
	    	int l=s.length();
	    	char c;
	    	for(int i=0;i<l;i++)
	    	{
	    		for(int j=i+1;j<l;j++)
	    		{
	    			if(s2[i]==s2[j])
	    			{   
	    				for(int k=j;k<l;k++)
	    				    s2[k]=s2[k+1];
					        l--;
					        j--;
					}
				}
			}	
			for(int i=0;i<l;i++)
			        search_array(s,s2[i]);	
		}
	
	return 0;
}
