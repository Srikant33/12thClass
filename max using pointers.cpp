#include<iostream.h>
#include<conio.h>
int *max(int *x, int *y)
{ if(*x>*y)
  return x;
  else
  return y;  }
void main()
{ clrscr();
inta,b,*c;
cout<<”Enter 2 nos.”<<endl;
cin>>a>>b;
cout<<”Greater no. is:”<<endl;
  c=max(&a,&b);
cout<<*c;
getch();
}
