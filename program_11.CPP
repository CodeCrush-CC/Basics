/*A program to find area of triangle.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr() ;
 float b,h,ar ;

 cout<<"Enter base:\t" ;
 cin>>b ;
 cout<<"\nEnter height:\t";
 cin>>h ;

 ar = 0.5*b*h ;

 cout<<"\nThe area is:\t"<<ar ;

 getche();
}