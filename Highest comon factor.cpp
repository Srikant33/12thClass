#include<iostream.h>
#include<conio.h>
int hcf(int a,int b)
{	int rem;
	while(b!=0)
	{     rem=a%b;
	a=b;
	b=rem;		}
	return a;	}
int main()
{	clrscr()
	int x,y;
	cout<<"value of first no.=";
	cin>>x;
	cout<<"value of second no.=";
	cin>>y;
	cout<<endl;
	cout<<"the highest common factor of "<<x<<"and"<<y<<"is:"<<hcf(x,y);
	getch();
	return 0;
}
