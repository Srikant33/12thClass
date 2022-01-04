#include<fstream.h>
#include<conio.h>
void main()
{clrscr();
int count=0;
char line[80];
ifstreamifile;
ifile.open("myfile.txt");
while(ifile)
{ ifile.getline(line,80);
if(line[0]=='a'||line[0]=='A')
{count++; } }
ifile.close();
getch();
}
