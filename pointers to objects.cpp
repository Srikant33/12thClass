#include<iostream.h>
#include<conio.h>
class student{	char name[20];
		int roll;
		float marks;
		public:
		void get_det()
		{cin>>name>>roll>>marks;	}
		void disp()
		{cout<<name<<” “<<roll<<” “<<marks;	}
	      };
void main()
{clrscr();
student s1,*s2;
s2=new student;
cout<<”enter the details of first student”<<endl;
s1.get_det();
cout<<”details of first student are:”<<endl;
s1.disp();
cout<<”enter the details of second student”<<endl;
s2->get_det();
cout<<endl;
cout<<”details of second student are:”<<endl;
s2->disp();
getch();
}
