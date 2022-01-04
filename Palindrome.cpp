// a palindrome
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main( )
{
clrscr( );
char str[80];
cout<<"Enter a string:\n";
gets(str);

for(int l=0;str[l]!='\0';l++);		//To find length of the string

for (int i=0;(i<l/2) && (str[i]==str[l-i-1]);i++);
if(i==l/2)
cout<<"It is a palindrome";
else
cout<<"It is not a palindrome";
getch();
}
