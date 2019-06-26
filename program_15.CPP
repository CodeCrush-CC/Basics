/*Enter principle, rate and time to calculate simple interest*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float pr,r,t,i;
 clrscr();

  cout<<"\n\nEnter principle:\t" ;
  cin>>pr ;
  cout<<"\nEnter rate:\t" ;
  cin>>r ;
  cout<<"\nEnter time:\t" ;
  cin>>t ;

  i = (pr*r*t)/100 ;

  cout<<"\nSimple Interest:\t"<<i ;

 getche();
}
