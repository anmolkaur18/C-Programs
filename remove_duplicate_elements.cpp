#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
cin>>n;
int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
             {   
                for(int j=i+1;j<n;j++)
                 {
                     if(a[i]==a[j])//if duplicate is found
                     {
                     	int k=j;
                     	for(k;k<n;k++)
                     	 {
                     	 	a[k]=a[k+1];//removes the duplicate element
						  }
						  n--;
					 }
                 }
             }
             for(int i=0;i<n;i++)
             cout<<a[i]<<"\t";
	return 0;
}

