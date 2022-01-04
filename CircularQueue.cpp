#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
intfront,rear,val,choice, CQ[100],size,res,n; char ch='y',ans='y';
/*Prototypes*/
void insert(int CQ[],int front, int&rear,intval,int size);
int remove(int CQ[], int&front,int rear);
void display(int CQ[], int front, int rear);
void main()
{  clrscr();
cout<<"Enter elements for circular Q?(y/n)";
cin>>ch;
  if(ch=='y'||ch=='Y')
  { front=rear=0;
cout<<"Enter size of Queue"<<endl;
cin>>size;
    for(front=0;rear<size;rear=(rear+1)%size)
       {	cin>>CQ[rear];
	cout<<"Enter more elements?(y/n)";
	cin>>ans;
	 if(ans=='y'||ans=='Y')
	 continue;
	 else
	 break;       }  };
do
  {   cout<<"1-Insert 2-Remove 3-Display 4-Quit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
   switch(choice)
   {    case 1: cout<<"Enter value to be added"<<endl;
	cin>>val;
	    insert(CQ,front,rear,val,size);
	cout<<"The Q is:"<<endl;
	    display(CQ,front,rear);
	cout<<endl;
	    break;
case 2: res=remove(CQ,front,rear);
                  if(res==-1)
	exit(1);
	else
	    {cout<<"The deleted value is: "<<res<<" ";
	cout<<"The Queue is:"<<endl;
	display(CQ,front,rear);
	cout<<endl;	    }
	break;
case 3: cout<<"The Queue is:"<<endl;
	display(CQ,front,rear);
	cout<<endl;
	break;    }
}while(choice!=4);
getch();
}
/*Function Definitions*/
void insert(int CQ[],int front, int&rear,intval,int size)
{ if((rear+1)%size==front)
{ cout<<"Queue full"; }
else
{ rear=(rear+1)%size;
CQ[rear]=val;  }
};
int remove(int CQ[],int&front, int rear)
{intnum;
if(front==-1)
 {cout<<"Queue empty";
return -1; }
else
{ if(front==rear)
   {num=CQ[front];
front=rear=-1;   }
else
 { num=CQ[front];
front++;   }
returnnum; }
};
void display(int CQ[],intfront,int rear)
{ inti;
i=front;
while(i!=rear)
{ cout<<CQ[i]<<'\t';
i=(i+1)%size;}
cout<<CQ[rear];   };
