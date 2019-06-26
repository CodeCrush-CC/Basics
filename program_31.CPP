/*A program to read coordinates of two points and calculate the distance between them as per following formula*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 double x1,y1,x2,y2,distance ;
 clrscr();
 cout<<"\nEnter x1 coordinate:\t" ;
 cin>>x1 ;
 cout<<"\nEnter y1 coordinate:\t" ;
 cin>>y1 ;
 cout<<"\nEnter x2 coordinate:\t" ;
 cin>>x2 ;
 cout<<"\nEnter y2 coordinate:\t" ;
 cin>>y2 ;

 distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) ;

 cout<<"\nDistance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is:\t"<<distance ;

 getche();
}
