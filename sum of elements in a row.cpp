#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int mat[10][10],r,c,sum=0;
cout<<"Enter size of row and coloumn of matrix=";
cin>>r>>c;
cout<<"Enter elemets of matrix=";
   for(inti=0;i<r;i++)
      { for(int j=0;j<c;j++)
              { cin>>mat[i][j];                 }}
      for(int m=0;m<r;m++)
            { for (int n=0;n<c;n++)
                  { cout<<mat[m][n]<<'\t';                  }
cout<<endl;            }
       for(int k=0;k<r;k++)
           { sum=0;
                for (int l=0;l<c;l++)
                  { sum+=mat[k][l];                   }
cout<<"Sum of the "<<k+1<<"th row is="<<sum<<endl;              }
getch();
}
