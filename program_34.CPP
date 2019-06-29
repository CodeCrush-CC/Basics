/*A program to calculate and print roots of a quadratic equation ax^2+bx+c=0 (a!=0)*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float a,b,c,root1,root2,chk ;

 cout<<"Enter the coeffcients as a, b & c:\t"
     <<"\n\nax^2 + bx + c:\t";
 cin>>a>>b>>c ;

 if(a==0)    //if a is zero
 cout<<"\n\nValue of \'a\' should not be zero"
     <<"\nAborting..!!!!" ;

 else
 {
  chk = b*b-4*a*c    ;
   if(chk > 0)
   {
    root1 = (-b + sqrt(chk))/(2*a) ;
    root2 = (-b - sqrt(chk))/(2*a) ;
    cout<<"\nRoots are REAL and UNEQUAL"
	<<"\nRoot 1 = "<<root1
	<<"\nRoot 2 = "<<root2 ;
   }
   else
    if(chk == 0)
    {
     root1 = -b/(2*a) ;
     cout<<"\nRoots are REAL and EQUAL"
	 <<"\nRoot 1 = "<<root1
	 <<"\nRoot 2 = "<<root1 ;
    }
   else
    cout<<"\nRoots are COMPLEX and IMAGINARY" ;
  }

 getche();
}