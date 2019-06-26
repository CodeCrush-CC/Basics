/*A progam to input a number. if entered value is odd and positive, prints its square root otherwise print n^5.*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int n;
 float chk ;

 cout<<"Enter any number:\t" ;
 cin>>n ;

 chk = (n%2!=0 && n>0) ? sqrt(n) : pow(n,5) ;

 cout<<"Value:\t"<<chk ;

 getche();
}