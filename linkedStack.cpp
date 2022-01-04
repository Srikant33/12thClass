#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node{	int info;
	node *next;
	   }*save, *ptr, *newptr, *top;
node* create(intinf);
void push(node*);
void display(node*);
void pop();

void main()
{clrscr();
top=NULL;
intinf,num,x;
charch='y';
cout<<"Create dynamic stack(y/n)?"<<" ";
cin>>ch;
while(ch=='y'||ch=='Y')
  {cout<<"Enter information for new node"<<endl;
cin>>inf;
newptr=create(inf);
if(newptr==NULL)
   {cout<<"Cannot create new node!!";
exit(1);   }
else
push(newptr);
cout<<"Enter more nodes?(y/n)";
cin>>ch; }
do
  {cout<<"1- Push 2-Pop 3-Display 4-Quit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>num;
switch(num)
    {case 1: cout<<"Enter details of node to be pushed";
	cin>>x;
	newptr=create(x);
	push(newptr);
	cout<<"The stack now is: "<<endl;
	display(top);
	cout<<endl;
	break;
case 2: pop();
	cout<<"The stack now is: "<<endl;
	display(top);
	cout<<endl;
	break;
case 3: cout<<"The stack is: "<<endl;
	display(top);
	cout<<endl;
	break;    }
}while(num!=4);
getch();
}
/*Function definitions*/
node* create(int n)
{ptr= new node;
ptr->info=n;
ptr->next=NULL;
returnptr;
};
void push(node*np)
{ if(top==NULL)
top=np;
else
  {save=top;
top=np;
np->next=save;  }
};
void pop()
{  if(top==NULL)
  {cout<<"Stack empty"<<endl;}
else
  {ptr=top;
top=top->next;
cout<<"Popped value is: "<<ptr->info<<endl;
deleteptr;  }
};
void display(node*np)
{ while(np!=NULL)
{cout<<np->info<<"-->";
np=np->next; }
};
