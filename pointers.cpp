#include <iostream>
using namespace std;
int swap(int* a ,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
   int x,y;
   cout<<"enter value of x and y";
   cin>>x>>y;
   swap(&x,&y);
   cout<<"value of x = "<<x<<"   value of y = "<<y;
    
    return 0;
}


