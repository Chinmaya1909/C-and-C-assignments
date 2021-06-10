#include<iostream>
using namespace std;
int main()
{
float a,b,c,s,r,area;
int ch;
double sqrt;
cout<<"***Menu***";
cout<<"\n1.Area of circle.";
cout<<"\n2.Area of Rectangle.";
cout<<"\n3.Area of triangle.";
cout<<"\nEnter your choice:";
cin>>ch;

switch(ch)
{
case 1:
{
cout<<"\nEnter radius of the circle:";
cin>>r;
area=3.14*r*r;
break;
}
case 2:
{
cout<<"nEnter length and breadth:";
cin>>a>>b;
area=a*b;
break;
}
case 3:
{
cout<<"nEnter three sides of the triangle:";
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
break;
}
default: cout<<"\nWrong choice…!!!";
break;
}
cout<<"Area="<<area;
return 0;
}