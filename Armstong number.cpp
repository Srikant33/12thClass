#include<iostream.h>
#include<conio.h>
int arm_no(int);	//protype for checking armstrong no.'s
void main()
{	clrscr();
cout<<"All Armstrong numbers below 1000 are:\n";
for(int i=1;i<=1000;i++)
	{
	if (arm_no(i)==1)
	cout<<i<<endl;		}
getch();	}
int arm_no (int n)
{	int digit,temp;
int sum=0,det=0;//determinant
temp=n;
while (temp!=0)
	{digit=temp%10;
	temp=temp/10;
	sum+=(digit*digit*digit);}
if (sum==n)
{det=1;}
else
{det=0;}
return det; }
