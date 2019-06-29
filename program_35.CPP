/*A program to input number of week's day (1-7) and translate to its equivalent name of the day
of the week (e.g. 1 to Sunday, 2 to Monday...7 to Saturday). */

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int wday ;

 cout<<"Enter position of week day:\t"  ;
 cin>>wday ;

 switch(wday)
 {
  case 1: cout<<"\nIts SUNDAY" ;
  break ;
  case 2: cout<<"\nIts MONDAY" ;
  break ;
  case 3: cout<<"\nIts TUESDAY" ;
  break ;
  case 4: cout<<"\nIts WEDNESDAY" ;
  break ;
  case 5: cout<<"\nIts THURSDAY" ;
  break ;
  case 6: cout<<"\nIts FRIDAY" ;
  break ;
  case 7: cout<<"\nIts SATURDAY" ;
  break ;

  default: cout<<"\nWrong number entered" ;
 }

 getche();
}