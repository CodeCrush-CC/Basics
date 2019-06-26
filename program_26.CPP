/*A program to input principle maount and time. if time is more than 10 years, calculate simple interest with rate 8%.
otherwise calculate it with rate 12% per annum*/

#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float pr,t,di ;

  cout<<"Enter principle amount:\t" ;
  cin>>pr ;
  cout<<"Enter time:\t" ;
  cin>>t ;

  i = (t>10) ? (pr*0.08*t) : (pr*0.12*t) ;

  cout<<"The interest would be:\t"<<i ;

  getche();
}