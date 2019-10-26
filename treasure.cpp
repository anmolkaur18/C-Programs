#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"\t\t\t\t\tTreasure Hunt\n";
	cout<<"\t\t\tthe treasure is hidden somewhere between these coordinates: \n \t\t\t\t (0,0) , (0,30) , (30,0) , (30,30)";
	cout<<"\n 1.you have three lives \n 2.to reach the treasure you have to enter x and y coordinate and the direction in which you want to move\n GAME BEGINS";
	cout<<"you are right now present at coordinate 0,0\n";
	int l=3,tx,ty,ar[6];
    char choice;
     int gx=0,gy=0,py=0,px=0;
    
	  tx=(rand()%30)+1;
	  ty=(rand()%30)+1;
	  cout<<endl<<tx<<endl<<ty<<endl;
	  
	while(l>0)
	{ int x,y;
		l--;
		cout<<"enter the coordiantes\n";
		cin>>x>>y;
		cout<<"enter L for moving in left U for upwards D for downwards R for right\n ";
		cin>>choice;
		
		switch(choice)
		{
			case 'l':
			case 'L': px=gx-x;
					  if(px==tx&&py==ty)
					   {
					   cout<<"you won the game";
					   exit(0);
					   } 
					    else if(px<0||px>30)
					   {
					   cout<<"game lost bcuz you are out of bound";
		               exit(0);
		               }
		               else 
		               {
		               	cout<<"oh you still didnt reach the treasure\n you are right now at "<<"("<<px<<","<<py<<")"<<endl;
					   }
				break;
				case 'R':
			case 'r': px=gx+x;
					  if(px==tx&&py==ty)
					   {
					   cout<<"you won the game";
					   exit(0);
					   } 
					    else if(px<0||px>30)
					   {
					   cout<<"game lost bcuz you are out of bound";
		               exit(0);
		               }
		               else 
		               {
		               	cout<<"oh you still didnt reach the treasure\n you are right now at "<<"("<<px<<","<<py<<")"<<endl;
					   }
				break;
					case 'U':
			case 'u': py=gy+y;
					  if(px==tx&&py==ty)
					   {
					   cout<<"you won the game";
					   exit(0);
					   } 
					    else if(py<0||py>30)
					   {
					   cout<<"game lost bcuz you are out of bound";
		               exit(0);
		               }
		               else 
		               {
		               	cout<<"oh you still didnt reach the treasure\n you are right now at "<<"("<<px<<","<<py<<")"<<endl;
					   }
				break;
					case 'D':
			case 'd': py=gy-y;
					  if(px==tx&&py==ty)
					   {
					   cout<<"you won the game";
					   exit(0);
					   } 
					    else if(py<0||py>30)
					   {
					   cout<<"game lost bcuz you are out of bound";
		               exit(0);
		               }
		               else 
		               {
		               	cout<<"oh you still didnt reach the treasure\n you are right now at "<<"("<<px<<","<<py<<")"<<endl;
					   }
				break;
				default:
					cout<<"enter a valid choice";
		}
	}
	cout<<"game over";
	return 0;
	
}
