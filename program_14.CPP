/*Enter marks of five subjects and calculate it's average*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float a,b,c,d,e,f;
 clrscr();

  cout<<"\n\nEnter marks1:\t" ;
  cin>>a ;
  cout<<"\nEnter marks2:\t" ;
  cin>>b ;
  cout<<"\nEnter marks3:\t" ;
  cin>>c ;
  cout<<"\nEnter marks4:\t" ;
  cin>>d ;
  cout<<"\nEnter marks5:\t" ;
  cin>>e ;


  f = (a+b+c+d+e)/5 ;

  cout<<"\nAverage marks of five subjects:\t"<<f ;

 getche();
}
