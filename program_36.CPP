/*A program to calculate area of a CIRCLE,a RECTANGLE, a TRIANGLE depending uopn user's choice. */

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr() ;
 int choice ;
 float r,ar,l,b,h ;

 cout<<"Area Menu:\t"
     <<"\n\n1. Area of CIRCLE:"
     <<"\n2. Area of RECTANGLE"
     <<"\n3. Area of Triangle"
     <<"\n4. EXIT"
     <<"\n\nEnter your choice:\t" ;
 cin>>choice ;

 switch(choice)
 {
  case 1:  cout<<"\n\nEnter radius:\t" ;
	   cin>>r ;

	   ar = 3.14*r*r ;

	   cout<<"\nArea of circle is:\t"<<ar ;

	   break ;

  case 2: cout<<"\n\nEnter length:\t" ;
	  cin>>l ;
	  cout<<"\nEnter breadth:\t" ;
	  cin>>b ;

	  ar = l*b ;

	  cout<<"\n\nArea of rectangle is:\t"<<ar ;

	  break ;

  case 3: cout<<"\n\nEnter base:\t";
	  cin>>b ;
	  cout<<"\nEnter height:\t" ;
	  cin>>h ;

	  ar = 0.5*b*h ;

	  cout<<"\nArea of triangle is:\t"<<ar ;

	  break ;

  default: break ;
 }
 getche();
}