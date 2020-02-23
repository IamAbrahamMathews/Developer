#include <stdio.h>
#include <stdlib.h>

void circle()
{   int radius=0,circum=0;
    cout<<"Enter the radius of the circle: ";
	cin>>radius;
	int area=0;
	area=(3.14)*(radius**2);
	circum=2*(3.14)*radius;
	cout<<circumference<<area;
}

void circumference()
{int radius=0,circum=0;
 cout<<"Enter the radius of the circle: ";
 cin>>radius;
 circum=2*(3.14)*radius;
}

void area()
{
 int radius=0,area=0;
 cout<<"Enter the radius of the circle: ";
 cin>>radius;
 area=(3.14)*(radius**2);
}

void passbyvaluecircle(int r,int area,int circum)
{
 
}

int main()
{   
	circle();
	circumference();
	area();
	cout<<"Enter the radius";
	cin>>radius;
	passbyvaluecircle(int r,int area1,int circum)


}