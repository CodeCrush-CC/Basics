/*A program to create the equivalent of a four-functioned calculator. The program requires
the user to enter two numbers and an operator. It then carries out the specified arithmetical
operation: (+,-,*,/) of the two numbers and display the result*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,y,result ;
 char ch ;

 cout<<"Enter first number:\t" ;
 cin>>x ;
 cout<<"Enter second operator:\t" ;
 cin>>y ;
 cout<<"Enter the operator (+,-,*,/):\t" ;
 cin>>ch ;

 if(ch == '+')
  result = x+y ;

 else
  if(ch == '-')
   result = x-y ;
 else
  if(ch == '*')
   result = x*y ;
 else
  if(ch == '/')
   result = x/y ;
 else
  cout<<"\nInvalid operator entered:\t" ;
  goto end;

 cout<<"\n\nThe calculated result of:  "<<x<<" & "<<y<<" is:  "<<result ;
 end :

 getche();
}