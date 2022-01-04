#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{         clrscr();
	  int i=0,j=0;
	  char str1[20],str2[20];
	  puts("Enter first string");
	  gets(str1);
	  puts("Enter second string");
	  gets(str2);
	  cout<<"Before concatenation the strings are\n";
	  puts(str1);
	  puts(str2);
	  while(str1[i]!='\0'){
	  i++;		  }
	  while(str2[j]!='\0')
{	 str1[i++]=str2[j++];           }
                 str1[i]='\0';
		 cout<<"After concatenation the strings are\n";
		 puts(str1);
		 getch();
                 return 0;		}
