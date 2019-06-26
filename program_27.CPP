/*A program that checks for experienced or not and input the age of a person.
The salary of the person should be 6000, if "The person is experinced and his age is more than 35"-
Otherwise The salary should be 4800 if "The person is experienced and his age is more than 28 but less than 35"
Otherwise The salary for experienced person should be 3000 and for inexperienced the salary should be 2000*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int exp,age,sal ;

 cout<<"The person is experinced ?\n"
     <<"Press 1 for YES, 0 for NO:\t" ;
 cin>>exp ;
 cout<<"\nEnter your age :\t" ;
 cin>>age ;

 sal = (exp) ? ((age>35) ? 6000 : (age>28) ? 4800 : 3000) : 2000 ;

 cout<<"\nThe salary of the person is:\t"<<sal ;

 getche();

}