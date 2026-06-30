#include <iostream>
#include<string>

using namespace std;

class Shape{
	private:
		string color;
		double area;
		
		public:
			void setColor(string c)
			{
				color=c;
			}
			string getColor()
			{
				return color;
			}
			void setArea(double a)
			{
				area=a;
			}
			double getArea()
			{
				return area;
			}
};
class Circle:public Shape{
	private:
		double radius;
		
		public:
			void setRadius(double r)
			{
				radius=r;
			}
			void CalculateArea()
			{
				double a;
				a=3.14*radius*radius;
				setArea(a);
			}
};
class Rectangle:public Shape{
	private:
		double length;
		double width;
		
		public:
			void setDimension(double l,double w)
			{
				length=l;
				width=w;
			}
			void CalculateArea()
			{
				double a;
				a=length*width;
				setArea(a);
			}
};
int main()
{
	Circle c;
	
	c.setColor("Red");
	c.setRadius(5.0);
	c.CalculateArea();
	
	cout<<"\nColor: "<<c.getColor()<<endl;
	cout<<"Area: "<<c.getArea()<<endl;
	
	Rectangle r;
	
	r.setColor("Blue");
	r.setDimension(2.0,5.0);
	r.CalculateArea();
	
	cout<<"\nColor: "<<r.getColor()<<endl;
	cout<<"Area: "<<r.getArea()<<endl;
	
	return 0;
}
