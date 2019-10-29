#include<iostream>
#include<string.h>
using  namespace std;
 void palinFun(char a[100])
 {  int n;
     char b[100];
     strcpy(b,a);
     strrev(b);
     if(strcmp(a,b)==0)
      cout<<"yes it's a palindrome";
	  else 
	  cout<<"no it's not a palindrome"; 
 	
 }

int main()
{  int n;
    char a[100];
    cout<<"enter a string\n";
    gets(a);
    palinFun(a);
    return 0


