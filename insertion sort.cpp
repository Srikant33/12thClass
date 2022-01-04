#inlcude<iostream.h>
#include<conio.h>
void main()
{  intI,j,temp,pos,k,A[10];
cout<<”Enter the array (10 elements)\n”;
for(i=0;i<10;i++)
{  cin>>A[i];  }
for(i=0;i<10;i++)
{   temp=A[i];
for( j=i-1; j>=0;j--)
      {     if(temp<A[j])
{  pos=j;   }
else   break;
       }
for(k=i;k<pos;k--)
  { A[i++]=A[i];
    A[pos]=temp;   }
}
cout<<”The sorted array is\n”;
for(i=0;i<10;i++)
{ cout<<A[i]<<’\t’;    }
getch();
}
