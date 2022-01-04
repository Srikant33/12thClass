#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
	clrscr();
	const int rsize=3;
	const int csize=3;
	int i,j,a[rsize][csize]={0},b[rsize][csize]={0};
	cout<<"Enter array\n";
	for(i=0;i<rsize;i++){
	for(j=0;j<csize;j++){
	cin>>a[i][j];
}	}

cout<<"Matrix is\n";
for(i=0;i<rsize;i++){
for(j=0;j<csize;j++)
{	cout<<a[i][j]<<" ";	}
cout<<endl;	}
//calculation
for(i=0;i<rsize;i++){
for(j=0;j<csize;j++){
b[j][i]=a[i][j];
}}
cout<<"Transpose is\n";
for(i=0;i<csize;i++){
for(j=0;j<rsize;j++){
cout<<b[i][j]<<" ";
}cout<<endl;
}
getch();
}
