#include <iostream.h>
#include <stdio.h>
#include<conio.h>

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 int main( )
{
   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book

   clrscr();
   cout<<"enter book name,book author,subject and id:";
   // book 1 specification
   gets(Book1.title);
   gets(Book1.author);
   gets(Book1.subject);
   cin>>Book1.book_id;

   // book 2 specification
   gets(Book2.title);
   gets(Book2.author);
   gets( Book2.subject);
   cin>>Book2.book_id ;

   // Print Book1 info
   cout << "Book 1 title : " << Book1.title <<endl;
   cout << "Book 1 author : " << Book1.author <<endl;
   cout << "Book 1 subject : " << Book1.subject <<endl;
   cout << "Book 1 id : " << Book1.book_id <<endl;

   // Print Book2 info
   cout << "Book 2 title : " << Book2.title <<endl;
   cout << "Book 2 author : " << Book2.author <<endl;
   cout << "Book 2 subject : " << Book2.subject <<endl;
   cout << "Book 2 id : " << Book2.book_id <<endl;
   getch();
   return 0;
}
