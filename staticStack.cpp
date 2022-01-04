#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
constint size=100;
classdatastruc{
int number[100];
int top=-1;
public:
void display(datastruc this stack);//to prepare for several stacks
void push(datastruc this stack, intval);
int pop(datastruck this stack);
     };
void stack:: push(datastruc this stack, intval)
{  if(top==size)
{ cout<<"Stack full";
exit(1);  }
else
  {    top++;
number[top]=val;  }
};
int stack:: pop(datastructhis stack)
{ intnum;
if (top==0)
  {cout<<"stack empty";
exit(1);  }
else
  {num=number[top];
top--;  }
returnnum;
};
void stack:: void display(datastruc this stack)
{ if(top==-1)
 {exit(1);  }
else
 {   for(inti=top;i>=0;i--)
{ cout<<number[i]<<endl;     }
 }};
void main()
{  clrscr();
intval,datastrucstack,res,choice,x,num,i; charch='y';
cout<<"Enter elements of stack"<<endl;//to initialize stack
for(i=0;i<size;i++)
  {
cin>>val;
stack.push(,val);
cout<<"Enter more elements?";
cin>>ch;
if (ch=='y'||ch=='Y')
{  continue;
     }
else
break;
   }
do
     {
	cout<<"1-Push"<<" "<<"2-Pop"<<" "<<"3-quit"<<endl;
	cout<<"Enter your choice"<<endl;
cin>>choice;
	switch(choice)
	{
		case 1:cout<<"Enter value to be pushed"<<endl;
			cin>>val;
			stack.push(,val);
			cout<<"The stack now is:"<<endl;
			stack.display();
			break;
		case 2:res=stack.pop();
			cout<<"Popped value is:"<<" "<<res<<endl;
			cout<<"The stack now is:"<<endl;
			stack.display();
			break;
	}
}while(choice!=3);
getch();
}
