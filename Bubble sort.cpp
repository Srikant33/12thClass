#include<iostream.h>
#include<conio.h>
void main()
{  int I, j , temp, A[10];
cout<<”Enter the array(10 elements)\n”;
for(inti=0, i<10, i++)
  {    cin>>A[i]; }
for(i=0;i<10;i++)
{ for(j=0;j<9;j++)
{ if( A[j]>A[j+1])
         { temp=A[j];
            A[j]=A[j+1];
A[j+1]=temp;
         }
     }
}
cout<<”The sorted array is\n”;
for(i=0;i<10;i++)
{ cout<<A[i]<<’\t’;
}
getch();
}
