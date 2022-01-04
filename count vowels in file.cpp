#include<fstream.h>
#include<conio.h>
void main()
{ clrscr();
ifstreamifile;
ifile.open("myfile.txt");
 char ch;
int s=0;
 while(ifile)
 { ifile.get(ch);
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 {s++;  }}
cout<<s;
ifile.close();
getch();
 }
