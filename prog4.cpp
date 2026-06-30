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
			
			virtual void Display()
			{
				cout<<"Shape"<<endl;
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
			
			void Display()override
			{
				cout<<"Color: "<<color<<endl;
				cout<<"Radius: "<<radius<<endl;
				cout<<"Area: "<<area<<endl;
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
			
			void Display()override
			{
				cout<<"Color: "<<color<<endl;
				cout<<"Dimension: "<<length<<*<<width<<endl;
				cout<<"Area: "<<area<<endl;
			}
};

int main()
{
	int i;
	Circle c1;
	
	c1.setColor("Yellow");
	c1.setRadius(5.0);
	c1.CalculateArea();
	
	
	Rectangle r1;
	
	r1.setColor("Green");
	r1.setDimension(4.0,6.0);
	r1.CalculateArea();
	
	Shape* S[2];
	
	S[0]=&c1;
	S[1]=&r1;
	
	for(i=0; i<2; i++)
	{
	   S[i]->Display();
	}
	return 0;
}
