#include <iostream>
using namespace std;
class Test
{
   private:
      int count;
   public:
   	void enter()
   	{
   		cout<<"enter count";
   		cin>>count;
	   }
      
       void operator ++() 
       { 
          count = count+1; 
       }
       void Display() { cout<<"Count: "<<count; }
};
int main()
{
    Test t;
	t.enter();
    // this calls "function void operator ++()" function
    ++t;    
    t.Display();
    return 0;
}

