#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  char a[10], b[10], c[20], *p1, *p2, *p3;
  gets(a);
  gets(b);
  p1=a; p2=b; p3=c;
  while(*p1!='\0')
  { *p3++=*p1++;  }
  while(*p2!='\0')
  { *p3++=*p2++;  }   
 p3--;
  char *ptr; ptr=c;
  while(ptr<=p3)
  { cout<<*ptr;
ptr++;  }
getch();
}
