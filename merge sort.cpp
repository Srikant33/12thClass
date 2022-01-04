#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
intI,j,m,n,k,A[50],B[50],C[50];
cout<<”Enter size of first array\n”;
cin>>n;
cout<<”Enter the first array\n”;
for(i=0;i<n;i++)
{ cin>>A[i];   }
cout<<”Enter size of second array\n”;
cin>>m;
cout<<”Enter the second array\n”;
for(i=0;i<m;i++)
{   cin>>B[i];  }
i=0; j=m-1; k=0;
while (i<n&&j>=0)
{  if(A[i]>B[j])
{  C[k]=A[i];
k++;  i++;  }
else
{  C[k]=B[j];
k++; j--;    }
 }
while(i<m)
{ C[k++]=A[i++];   }
while(j>0)
{  C[k++]=B[j--];    }
cout<<”The sorted array is\n”;
for(i=0;i<k;i++)
{   cout<<C[i]<<’\t’;   }
getch();
}
