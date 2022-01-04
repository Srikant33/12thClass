#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main( )
{
clrscr( );
char str[80];
int words=0;
cout<<"Enter a string:";
gets(str);

for(int i=0;str[i]!='\0';i++)
{
if (str[i]==' ')
	words++; 		//Checking for spaces
}
cout<<"The number of words="<<words+1<<endl;
getch();		}
