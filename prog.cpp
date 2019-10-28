#include<iostream>
using namespace std;

class Triangle{
	int s1,s2,s3;
	public:
		Triangle(){
		s1=s2=s3=1;
		}
		
		void enter()
		{cout<<"enter values for sides of the traingle\n";
		cin>>s1>>s2>>s3;
		}
		
		void operator++()
		{
			s1=s2;
			s2=s3;
		  	cout<<"s1=  "<<s1<<"  s2= "<<s2<<endl;
		}
		
		void operator = (const Triangle &t){
		s1=t.s1;
		s2=t.s2;
		s3=t.s3; 
		cout<<"s1=  "<<s1<<"  s2= "<<s2<<"  s3 =  "<<s3<<endl;
		}	
};
int main()
{
	Triangle tri,tri1;
	tri.enter();
	++tri;
	tri1=tri;
	return 0;
}
