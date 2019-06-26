/*Enter two numbers and swap both the numbers without using empty variable*/

#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b ;
 clrscr();

 cout<<"\nEnter 1st number:\t";
 cin>>a ;
 cout<<"\nEnter 2nd number:\t" ;
 cin>>b ;

 a = a+b ;
 b = a-b ;
 a = a-b ;

 cout<<"\nFirst number:\t"<<a ;
 cout<<"\nSecond number:\t"<<b ;

 getche();
}
