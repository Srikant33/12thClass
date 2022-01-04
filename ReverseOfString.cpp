#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{	clrscr();
	int l,i,k=0;
	char str[80], word[80];
	cout<<"enter any string "<<endl;
	gets(str);
	strcat(str," ");         //concat a space at the end of string
	for (i=0;str[i]!='\0';i++)
	{	if(str[i]!=' ')
		{	word[k]=str[i];
			k=k+1;		}
		else
		{	while (k>0)
			{   cout<<word[--k];    }
		cout<<str[i];
		}	}
	getch();
}
