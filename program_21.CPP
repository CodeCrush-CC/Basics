/*A program to accept a character between a to j and print next four character.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch,ch1,ch2,ch3,ch4 ;

 cout<<"Enter any character between a to j:\t" ;
 cin>>ch ;

 if(ch>='a' && ch<='j')
 {
  ch1 = ch+1 ;
  ch2 = ch+2 ;
  ch3 = ch+3 ;
  ch4 = ch+4 ;

  cout<<"\nThe next four characters are:\t"<<ch1<<"\t" ;
  cout<<ch2<<"\t"<<ch3<<"\t"<<ch4 ;
 }
 else
  cout<<"\nNot valid..!!" ;

 getche();
}