#include<iostream.h>
#include<conio.h>
struct stud{	    char name[10];
	int roll;
	stud *next;
	};
void main()
{clrscr();
stud *first, *last, *x;
inti, N;
cout<<"Enter size"<<endl;
cin>>N;
if(N<=0)
{cout<<"Error"; }
first= new stud;
cout<<"Enter data"<<endl;
cin>>first->name>>first->roll;
first->next=NULL;
last=first;
for(i=1;i<N;i++)
   {     x=new stud;
cout<<"Enter data"<<endl;
cin>>x->name>>x->roll;
x->next=NULL;
last->next=NULL;
last->next=x;
last=x;
cout<<"List is:"<<endl;
last=first;
while(last!=NULL)
	  {	cout<<"Name = "<<last->name<<" ";
	cout<<"Roll = "<<last->roll<<" ";
	last= last->next;	  }
delete first;  }
getch();
}
