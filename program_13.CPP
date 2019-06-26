/*A program that asks for your height in cm and converts it into feet and inches*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float cm,in,fe ;
 clrscr();

 cout<<"\nEnter your height (in cm):\t" ;
 cin>>cm ;

 in = cm/2.54 ;
 fe = cm/30.38 ;

 cout<<"\nyour height in inches:\t"<<in ;
 cout<<"\nyour height in feet:\t"<<fe ;

 getche();
}
