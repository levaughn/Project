// project Q.cpp : Defines the entry point for the console application.
//


#include<iostream>
#include<math.h.>
#include<strstream>
#include <string>
using namespace std;


	class rectangle
{
public:
		
	float calc;
};
class circle
{
public:
	
	float calc;
};




float b;
float h;
float d;

int main()
{
string shape;
rectangle rectsecmom_area;
circle cirsecmom_area;
cout<<"Enter a shape, either a rectangle or a circle"<<shape<<endl;
getline(cin,shape);
if(shape=="rectangle")
{
cout<<"enter the base dimension..."<<b<<endl;
cin>>b;
//rectsecmom_area.base=b;
cout<<"enter the height dimension"<<h<<endl;
cin>>h;
rectsecmom_area.calc=(pow(b,3)*(h)*(.0833));
cout<<" The second moment of area about the y axes of this rectangle is..."<<rectsecmom_area.calc<<endl;
}
else if(shape=="circle")
{
cout<<"enter the diameter"<<d<<endl;
cin>>d;
cirsecmom_area.calc=(pow(d,4)*(.049));
cout<<"The second moment of area of this circle is..."<<cirsecmom_area.calc<<endl;
}
else if(shape!="rectamgle"||shape!="circle")
{
	cout<<"What you have entered is not valid for this solver script!!"<<endl;
}
	return 0;
}

