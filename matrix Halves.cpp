
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,arr[3][3];

//input
cout<<"Enter array\n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
	{cin>>arr[i][j];}
}

//complete array
cout<<"Complete\n\n";
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
	{cout<<arr[i][j]<<" ";}
cout<<endl;
}

//lower half
cout<<"Lower half\n\n";
for(i=0;i<3;i++)
{for(j=0;j<=i;j++)
	{cout<<arr[i][j]<<" ";}
cout<<endl;
}

//upper half
cout<<"Upper half\n\n";
for(i=0;i<3;i++)
{
for(j=0;j<i;j++)//for loop for spacing
	{cout<<"  ";}
for(j=i;j<3;j++)
	{cout<<arr[i][j]<<" ";}
cout<<endl;
}

getch();
}
