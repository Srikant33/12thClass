#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
struct node{	int info;
	node *next;
	 }*front, *rear, *save, *ptr, *newptr;
/*FUNCTION PROTOTYPES*/
node* create(int);
void insert(node*);
void display(node*);
voiddel_node();

void main()
{clrscr();
intinf, choice,x;
charch='y';
cout<<"Create dynamic queue?(y/n)";
cin>>ch;
while(ch=='y'||ch=='Y')
{cout<<"Enter details for new node"<<endl;
cin>>inf;
newptr=create(inf);
if(newptr==NULL)
   {cout<<"Cannot create new node!!";
exit(1);   }
insert(newptr);
cout<<"Enter more nodes?(y/n)";
cin>>ch;  }
do
 {cout<<"1-Insert 2-Delete 3-Display 4-Quit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
   {case 1: cout<<"Enter value to be inserted"<<endl;
	cin>>x;
	newptr=create(x);
	insert(newptr);
	cout<<"The queue now is: "<<endl;
	display(front);
	cout<<endl;
	break;
case 2: del_node();
	cout<<"The queue now is: "<<endl;
	display(front);
	cout<<endl;
	break;
case 3: cout<<"The queue is : "<<endl;
	display(front);
	cout<<endl;
	break;      }
}while(choice!=4);
getch();
}
/*FUNCTION DEFINITIONS*/
node* create(int n)
{  ptr= new node;
ptr->info=n;
ptr->next=NULL;
returnptr;
};

void insert(node*np)
{  if (front==NULL)
{  front=rear=np;  }
else
  {rear->next=np;
   rear=np;  }}
voiddel_node()
{ if(front==NULL)
{ cout<<"Queue empty"<<endl; }
else
{ptr=front;
front=front->next;
cout<<"The deleted value is: "<<ptr->info;
deleteptr; }
};
void display(node*np)
{ while(np!=NULL)
{cout<<np->info<<"-->";
  np=np->next; }   };
