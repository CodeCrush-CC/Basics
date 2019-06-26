/*A program to read length and breadth of rectangle, calculate area and perimeter and display them.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float ar,pr,l,b ;
 clrscr();

 cout<<"\nEnter length of rectangle:\t" ;
 cin>>l ;
 cout<<"\nEnter breadth of rectangle:\t" ;
 cin>>b ;

 ar = l*b ;
 cout<<"\nArea:\t"<<ar<<"\n" ;
 pr = 2*(l+b) ;
 cout<<"\nPerimeter:\t"<<pr ;

 getche();
}
