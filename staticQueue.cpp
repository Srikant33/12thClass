#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
constint size=100;
classdatastruc{
intfront,rear, arr[100];
front=rear=-1;
		public:
			void insert(datastruc this Queue, intval);//in case of several queues
			int remove(datastructhis Queue);
			void display(datastructhis Queue);
		};
voiddatastruc::insert(datastruc this Queue,intval)
{ if(rear==size-1)
{ cout<<"Queue full";
exit(1);
  }
else if(rear==-1)
  {front=rear=0;
arr[rear]=val;
  }
else
  {rear++;
arr[rear]=val;
  }
};
intdatastruc:: remove(datastruc this Queue)
{  intnum;
if(front==-1)
  {cout<<"Queue empty";
exit(1);  }
else
{ num=arr[front];
if(front==rear)
front=rear=-1;
else
front++;  }
returnnum;
};
voiddatastruc::display(datastruc this Queue)
{inti;
i=front;
while(i<=rear)
{ cout<<arr[i]<<'\t';
i++;
}}:


void main()
{ clrscr();
intn,x,choice,val,res;
datastruc Queue;
charch='y',ans='y';
cout<<"Enter elements in queue?(y/n)";
cin>>ch;
if(ch=='y'||ch=='Y')
{  for(n=0;n<=size;n++)
       {
	cin>>x;
	Queue.insert(,x);//to initialize queue
	cout<<"Enter more elements?(y/n)";
	cin>>ans;
	if(ans=='y'||ans=='Y')
	continue;
	else
	break;
	}    };
do
{cout<<"1-Insert 2-Remove 3-Display 4-Quit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
     {case 1: cout<<"Enter value to be inserted"<<endl;
	cin>>val;
	Queue.insert(,val);
	cout<<"The Queue now is:"<<endl;
	Queue.display();
	cout<<endl;
	break;
case 2: res=Queue.remove( );
	cout<<"The removed value is:"<<res<<endl;
	cout<<"The Queue now is:"<<endl;
	Queue.display();
	cout<<endl;
	break;
case 3: Queue.display();
	break;
      }
}while(choice!=4);
getch();
}
