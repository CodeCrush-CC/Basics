/*A program to input a character and to print whether a given character is an
alphabet, a digit or any other character.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch ;

 cout<<"Input any Character:\t" ;
 cin>>ch ;

 if(ch >= 'a' && ch <= 'z')
 cout<<"\n\nLower case Alphabet:"    ;
 else
  if(ch >= 'A' && ch <= 'Z')
   cout<<"\n\nUpper case Alphabet:" ;
 else
  if(ch >= '0' && ch <= '9')
   cout<<"\n\nIt is a Digit:"  ;
 else
  cout<<"\n\nIt is a Special character:" ;

  getche();
}