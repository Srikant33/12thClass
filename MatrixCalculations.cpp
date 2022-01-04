#include<iostream.h>
#include<conio.h>
void main()

{	clrscr();
	int a[3][3], b[3][3], i, j, c[3][3],d[i][j];
	cout<<"enter 1st matrix ";
	for (i=0; i<3; i++)
	{	for (j=0; j<3; j++)
		{    cin>>a[i][j];    }

	}
	cout<<endl<<"enter 2nd matrix ";
	for (i=0; i<3; i++)
	{	for(j=0; j<3; j++)
		{    cin>>b[i][j];    }
	}

	//addition of 2 matrices
	for (i=0; i<3; i++)
	{	for (j=0; j<3; j++)
		c[i][j]= a[i][j] + b[i][j];
	}

	cout<<endl<<"sum of matrices : ";
	for (i=0; i<3; i++)
	{	for(j=0; j<3; j++)
		{    cout<<" "<<c[i][j];    }
	}

//subtraction of 2 matrices
	for (i=0; i<3; i++)
	{	for (j=0; j<3; j++)
		d[i][j]= a[i][j] - b[i][j];
	}

	cout<<endl<<"subtraction of matrices : ";
	for (i=0; i<3; i++)
	{	for(j=0; j<3; j++)
		{    cout<<" "<<d[i][j];    }
	}	

getch();
}
