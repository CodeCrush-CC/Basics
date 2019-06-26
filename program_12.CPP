/*A program to read two numbers and print their quotient and remainder*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float qu ;
 int a,b,re ;
 clrscr();

 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;

 re = a%b ;         //both operands must be of type int while using modulus operator
 qu = a/b ;

 cout<<"\nremainder:\t"<<re ;
 cout<<"\nquotient:\t"<<qu ;

 getche();
}