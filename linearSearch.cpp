
#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	const int size=5;
	int i,pos,value, arr[size];
	for(i=0;i<=size;i++)
	{	cout<<"enter value of array"<<endl<<i+1<<”.”;
		cin>>arr[i];		}
	cout<<endl<<"enter value to be searched";
	cin>>value;
	pos=-1;
	for(int c=0;c<size;c++)
	{	if(arr[c]==value)
		{ 	pos=c+1;
break;		}	}
	if (pos>-1)
		cout<<"element found at position:"<<pos;
	else
		cout<<"element not found";
	getch();}
