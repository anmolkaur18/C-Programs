// C program to demonstrate const specifier 
#include <iostream>
#include<iomanip>
#include<fstream>
using namespace std; 
int main() 
{ 
   int il=-254;
   float f1=53.6456;
   int i2=8;
   cout<<"il"<<setw(7)<<il<<"i2"<<setw(7)<<i2;
   cout.setf(ios::fixed,ios::floatfield);
   cout<<setprecision(2);
   cout<<"f1"<<f1;
   cout.setf(ios::oct,ios::basefield);
   cout<<"octal of i2 "<<i2;
	return 0; 
} 

