#include<fstream.h>
#include<conio.h>
void main()
{ ofstreamofile;
ofile.open("myfile.txt");
charstr[20];
cout<<"enter...";
gets(str);
for(inti=0;i<strln(str);i++)
{ofile.put(str[i]);  }
ofile.close();
ifstreamifile;
ifile.open("myfile.txt");
while(ifile)
{char ch;
ifile.get(h);
cout<<ch;  }
getch();
}
