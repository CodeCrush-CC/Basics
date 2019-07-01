/*A program to input any two numbers of type integers and display their sum*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c ;

 int sum(int,int);                 //function prototype

 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;

 c = sum(a,b) ;                    //calling of function

 cout<<"\nSum of Digits:\t"<<c ;

 getche();
}

int sum(int x, int y)             //function definition
{

 return(x+y) ;

}
