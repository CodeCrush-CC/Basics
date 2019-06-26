/*A program to print ASCII code for digit between 0 to 9 and backspace. */

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr() ;
 char digit;
 int b='\b' ;

 cout<<"ASCII code for backspace is:\t"<<b ;
 cout<<"\n\nEnter any digit:\t" ;
 cin>>digit ;

 if(digit>='0' && digit<='9')
 {
  int ch =digit ;
  cout<<"The ASCII code for entered digit is:\t"<<ch ;
 }
 else
 cout<<"Not Valid..!!" ;

 getche();
}