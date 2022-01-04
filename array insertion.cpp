#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int a[10],n,num,loc,back;
cout<<"Enter the sizeof the array=";
cin>>n;
cout<<"Enter elements of the array=";
  for (inti=0;i<n;i++)
	{ cin>>a[i];}
	cout<<"Enter the value to be inserted=";
	cin>>num;
	cout<<"Enter the location=";
	cin>>loc;
	if (n<49)
	  { back=n+1;
		 while(back>loc)
		  { a[back]=a[back-1];
			back--;}
	  a[back]=num;
	  n++;
	cout<<"Final list after insertion="<<endl;
	  for (int j=0;j<n;j++)
		{ cout<<a[j]<<'\t';}
		}
		else
		{cout<<"Insertion is not possible";}
getch();
 }
