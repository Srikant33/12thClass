#include<iostream.h>
#include<conio.h>
void week_year(int days);	//prototype for conversion of days
void main()
{
	clrscr();
	int days;
	cout<<"enter no.of days"<<endl;
	cin>>days;
	week_year(days);
	getch();
}
//function to convert days to weeks and years
void week_year(int days)
{
	float years,weeks;
	years=days/365;
	weeks=days/7;
	cout<<"no. of days="<<days<<endl;
	cout<<"no of weeks="<<weeks<<endl;
	cout<<"no. of years="<<years<<endl;
}
