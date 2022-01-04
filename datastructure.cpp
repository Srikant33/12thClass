#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int a[10],n,first,last,mid,key;
cout<<"Enter the size of the array=";
cin>>n;
cout<<"Enter the elements of the array=";
  for (inti=0; i<n;i++)
      { cin>>a[i];}
     first=0;
    last=n-1;
cout<<"Enter the value to be searched=";
cin>>key;
      do
           { mid=(first+last)/2;
                  if(key=a[mid])
                               { cout<<"Number was found at "<<mid+2<<"thposition";break;                              }
                else if(key>a[mid])
                       { first=mid+1;
                           continue;}
            else
                { last=mid+1;
                         continue;                  }
      } while(key!=a[mid]);
getch();
}
