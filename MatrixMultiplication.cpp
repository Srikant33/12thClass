
#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a[2][2], b[2][2], c[2][2], i, j;
	cout<<"enter the elements of matrix A ";
	cout<<endl;
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{    cin>>a[i][j];    }
	}
	cout<<endl<<"enter the elements of matrix B ";
	cout<<endl;
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{    cin>>b[i][j];    }
	}
	cout<<endl<<"you have entered the following matrices ";
	cout<<endl<<"matrix A ";
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{   cout<<a[i][j]<<" ";
		    cout<<endl;    }
	}
	cout<<endl<<"matrix B ";
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		{    cout<<b[i][j]<<" ";
		     cout<<endl;    }
	}
	cout<<"\n\nproduct of matrices are\n\n ";
	for(i=0;i<2;i++)
	{       for(j=0;j<2;j++)
		for(int k=0;k<2;k++)
		{     c[i][j]=0;
		c[i][j]+=a[i][k]*b[k][j];   }
	}
	for (i=0;i<2;i++)
	{	for(j=0;j<2;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;
	}
	getch();
}
