#include<fstream.h>
#include<conio.h>
struct stud{     char name[20];
	int roll;
	     float marks;
	     }s[3];
void main()
{       clrscr();
	ofstreamofile;
	ofile.open("myfile.dat",ios::binary);
	for(inti=0;i<3;i++)
	{cout<<"enter name,rollno.,marks";
	cin>>s[i].name>>s[i].roll>>s[i].marks;	}
	for(int j=0;j<3;j++)
	{ofile.write((char*)&s[j],sizeof(s[j]));	}
	ofile.close();
	ifstreamifile;
	ifile.open("myfile.dat",ios::binary);
	for(int k=0;k<3;k++)
	{while(ifile)
	{ifile.read((char*)&s[k],sizeof(s[k]));
	cout<<s[k].name<<" "<<s[k].roll<<" "<<s[k].marks"\n";	}
	ifile.close();	}
	getch();
	}
