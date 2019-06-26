/*A program to input three integer and print the largest of three using conditional operator*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,chk ;

 cout<<"Enter first integer:\t" ;
 cin>>a  ;
 cout<<"\nEnter second integer:\t" ;
 cin>>b ;
 cout<<"\nEnter third integer:\t" ;
 cin>>c ;

 chk = (a>b) ? ((a>c) ? a : c): (b>c) ? b : c ;

 cout<<"\n\nHighest number:\t"<<chk ;

 getche();
}






