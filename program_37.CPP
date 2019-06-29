/*A program to perform arithmetic calculation using switch.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n  ;
 float res, num, num1 ;

  cout<<"\nEnter first no.:\t" ;
  cin>>num ;
  cout<<"\nEnter second no.:\t" ;
  cin>>num1 ;

  cout<<"\n\nChoose an Operation:\t"
      <<"\n\n1.Sum (+)"
      <<"\n2.Subtraction (-)"
      <<"\n3.Multiplication (*)"
      <<"\n4.Division (/)"
      <<"\n5.Exit"
      <<"\n\nEnter your choice:\t"  ;
   cin>>n ;

  switch(n)
  {
   case 1:  res = num+num1 ;

	    break ;

   case 2:  res = num-num1 ;

	    break ;

   case 3:  res = num*num1 ;

	    break ;

   case 4:  if(num1 == 0)
	    cout<<"\nDivide by zero error:"  ;

	    else
	    res = num/num1 ;

	    break ;

   case 5: cout<<"Wrong Choice:" ;
	   break ;

  }
  cout<<"\n\nRESULT:\t"<<res ;

 getche();
}