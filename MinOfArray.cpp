#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int marks[5];
	int i,sum=0,avg=0;
	int max=0,min=100;
	for(i=0;i<5;i++)
	{	cout<<"enter the marks os the student:"<<endl;
		cin>>marks[i];	}
	for(i=0;i<5;i++)
	{	sum=sum+marks[i];
		if (marks[i]>max)
		{	max=marks[i];		}
	if(marks[i]<min)
	{	min=marks[i];		}	}
	avg=sum/10;
	cout<<"average marks of student:"<<avg<<endl;
	cout<<"maximum marks of student:"<<max<<endl;
	cout<<"minimum marks of student:"<<min<<endl;
	getch();	}
