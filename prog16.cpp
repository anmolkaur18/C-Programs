#include<iostream>
using namespace std;
class Person{
	protected:
	int age;
	char name[30];
	string mob_no;    //for mobile number 
	public: 
	virtual void print()
	{
		cout<<"base class\n";
	}
};

class Teacher:public Person{
	int tid;
	public:
		
		Teacher()
		{
			tid=0;
		}
		void t_info()
		{
			cout<<"enter age,name,mobile no. , ID of teacher\n";
			cin>>age;
			cin>>name;
			cin>>mob_no;
			cin>>tid;
		}
     void tprint()
		{
			cout<<"TEACHER ID is "<<tid<<"\nage= "<<age<<" name = "<<name<<" mobile number = "<<mob_no<<endl;
		}
		virtual void print()
	{
		cout<<"Teacher class\n";
	}
		};
class Student:public Person{
	int sid;
	public:
		
		Student()
		{
			sid=0;
		}
		void s_info()
		{
			cout<<"enter age,name,mobile no. , ID of teacher\n";
			cin>>age;
			cin>>name;
			cin>>mob_no;
			cin>>sid;
		}
    	void sprint()
		{
			cout<<"STUDENT ID is "<<sid<<"\nage= "<<age<<" name = "<<name<<" mobile number = "<<mob_no<<endl;
		}
		virtual void print()
	{
		cout<<"Student class\n";
	}
		};	
		
		
int main()
{
	Teacher t1;
	Student s1;
	cout<<"\nenter information for teacher 1\n\n";
	t1.t_info();
	cout<<"\n\nenter information for student 1\n\n";
	s1.s_info();
	
	cout<<"\n\nnow displaing the records\n\n";
	t1.tprint();
	s1.sprint();
	// implementing run time polymorphism
	cout<<"implementing run time polymorphism\n";
	Person* obj=new Person();
	obj->print();
	delete obj;
	obj=new Teacher();
	obj->print();
	delete obj;
	obj=new Student();
	obj->print();
	delete obj;
	return 0;
	}	
