#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
int flag=0;
 char a[10],b[10],*p1,*p2;
 p1=a;
 p2=b;
cout<<”enter two strings”<<endl;
 gets(a);
 gets(b);
 if(*p1==*p2)
 {p1++;
  p2++; }
 else{flag=1;}
 if(flag==0)
 {cout<<"same";   }
 else{cout<<"no";}
getch();
}
