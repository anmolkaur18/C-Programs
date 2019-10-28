#include<iostream>
using namespace std;
class Matrix{
	int r1,r2;
	int a[10][10];
	int b[10][10];
	int c[10][10];
	int c1,c2;
	public:
		void values(){   
	cout<<"sum and differnce operation is valid only when rows of matrix1 = rows of matrix 2 and columns of 1 = columns of 2\n";
	cout<<"enter r1 ,c1,r2,c2\n";
	cin>>r1>>c1>>r2>>c2;
	if(r1==r2 && c1==c2)
	{
		cout<<"enter values for matrix 1\n";
		for(int i=0;i<r1;i++)
		{for (int j=0;j<c1;j++)
		cin>>a[i][j];
		}
       	cout<<"enter values for matrix 2\n";
		for(int i=0;i<r2;i++)
		{for (int j=0;j<c2;j++)
		cin>>b[i][j];
		}
	}
	
}
		void sum()
		{
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		   {c[i][j]=a[i][j]+b[i][j];
		    cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
        }
		void differnce()
		{
for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		   {c[i][j]=a[i][j]-b[i][j];
		    cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
		}
		void product()
		{  int k[r1][c1]={0};
    for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int l=0;l<c1;l++)
             k[i][j]+=a[i][l]*b[l][j];		
			 cout<<k[i][j]<<" ";	
		}
		cout<<endl;
	 }
}
		void transpose()
		{   cout<<"\ntranspose of matrix a is as follows\n";
for(int i=0;i<r1;i++)
{
	for(int j=0;j<c1;j++)
	cout<<a[j][i]<<" ";
	cout<<endl;
}

 cout<<"\ntranspose of matrix b is as follows\n";
for(int i=0;i<r2;i++)
{
	for(int j=0;j<c2;j++)
	cout<<b[j][i]<<" ";
	cout<<endl;
}
}
		
};


int main()
{    int choice;
	Matrix M;
	M.values();
	cout<<"enter tour choice\n";
	cout<<" 1 for addition\n 2 for differnce\n 3 for product\n 4 for transpose\n";
	cin>>choice;
	switch(choice)
	{
		case 1: M.sum();
		break;
		case 2:M.differnce();
		break;
		case 3:M.product();
		break;
		case 4:M.transpose();
		break;
		default: cout<<"enter a valid choice\n";
	}
	
	return 0;
}
