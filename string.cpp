#include<iostream>//menu driven program for some operations on strings
#include<string.h>
using namespace std;
void a_ress (char str[30])//function to find the address of each character in string
{
	int i;
	cout<<"\ncharacter "<<"index ";
	for (i=0;str[i]!='\0';i++)
	cout<<"\n    "<<str[i]<<"         "<<i;
}

void con_wout ( char str[30])//function to concatenate strings without strcat() 
{ int i=0;
int k=0;
	cout<<"enter the second string\n";
	char str2[30]; char catstr[40];
	cin>>str2;
	while(str[i]!='\0')
	{ catstr[k++]=str[i];
	i++;
	}
		i=0;
		while(str2[i]!='\0')
	{ catstr[k++]=str2[i];
	i++;
	}
	cout<<catstr;
}


void con_with (char str[30])//function to concatenate strings using strcat()
{  cout<<"enter the second string\n";
  char str2[30];
   cin>>str2;
	strcat(str,str2);
	cout<<str;
}

void compare_str (char str[30])//function for camparing strings
{
	cout<<"enter the second string\n";
  char str2[30];
   cin>>str2;
	if(strcmp(str,str2)==0)
	cout<<"same strings";
	else
	cout<<"different strings";
}

void lower_upper (char str[30])//function to convert all lowercase alphabets to uppercase
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
		   str[i]=toupper(str[i]);
	}
	cout<<str;
}

void upper_lower (char str[30])//function to convert all uppercase alphabets to lowercase
{
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
		   str[i]=tolower(str[i]);
	}
	cout<<str;
}

void cal_length (char str[30])//function to calculate length of string using pointers
{   int i=0;
   char* ptr;
   ptr=str;
   while(*ptr!='\0')
   { i++;
    ptr++;
	   }
	   cout<<"the length of string is "<<i;	
}

void vowels (char str[30])//function to calculate number of vowels in string
{   int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		c++;
	}
	cout<<"number of vowels = "<<c;
}

void reverse(char str[30])//function to reverse the string
{  int i;
	int j;
	for(i=0;str[i]!='\0';i++);
	j=i-1;
	cout<<j<<endl;
		for(i=0;i<=(j/2+1);i++,j--) 
		{
			int temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			
		}
		
		cout<<str;
}

int main()
{
	char str1[30],str2[30];
	cout<<"enter the first string\n";
	cin>>str1;
	int choice;
	cout<<" enter 1 to show address of each character in the string\n";
	cout<<"enter 2 to concatenate two strings without using strcat function\n";
	cout<<"enter 3 to concatenate two strings using strcat function\n";
	cout<<"enter 4 to compare two strings\n";
	cout<<"enter 5 to convert all lower case characters to uppercase\n";
	cout<<"enter 6 to convert all upper case characters to lowercase\n";
	cout<<"enter 7 to calculate length of string using pointers\n";
	cout<<"enter 8 to calculate number of vowels\n";
	cout<<"enter 9 to reverse the string\n";
	cin>>choice;
	switch(choice){ case 1: a_ress(str1);
	                        break;
	                case 2: con_wout(str1);
	                          break;
	                case 3: con_with(str1);
	                          break;
	                case 4:  compare_str(str1);
	                          break;
	                case 5: lower_upper(str1);
	                          break;
	                case 6:  upper_lower(str1);
	                         break;
	                case 7:cal_length(str1);
	                         break;
	                case 8:  vowels(str1);
	                         break;
	                case 9: reverse(str1);
	                        break;
	                default: cout<<"enter a valid choice";
	            }return 0;}

