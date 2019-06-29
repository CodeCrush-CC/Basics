/*A program to print whether a given character is an uppercase or a lower case
or a digit or any other character. use ASCII code for it. The ASCII codes are as given below.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch ;

  cout<<"Enter any character:\t" ;
  cin>>ch ;

  if(ch >= 48 && ch <= 57)
   cout<<"\n\nIt is a Digit:" ;
  else
   if(ch >= 65 && ch <= 97)
    cout<<"\n\nUpper case Alphabet:" ;
  else
   if(ch >= 97 && ch <= 122)
    cout<<"\n\nLower case character:" ;
  else
   cout<<"\n\nIt is a special character" ;

 getche();
}