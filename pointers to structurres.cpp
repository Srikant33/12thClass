#include<iostream.h>
#include<conio.h>
struct student{ char name[20];
		int roll;
		float marks;
	       };
void main()
{clrscr();
student s1,*s2 ;
s2=new student;
cout<<"enter the record";
cin>>s1.name>>s1.roll>>s1.marks;
cout<<s1.name<<” “<<s1.roll<<” “<<s1.marks;
cin>>s2->name>>s2->roll>>s2->marks;
cout<<s2->name<<” “<<s2->roll<<” ”<<s2->marks;
delete s2;
s2 = new student;
cin>>s2->name>>s2->roll>>s2->marks;
cout<<s2->name<<” “<<s2->roll<<” “s2->marks;
getch();
}
