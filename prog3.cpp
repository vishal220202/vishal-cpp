#include<iostream>
#include<string>

using namespace std;

class Shape{
	private:
		string color;
		float area;
		
		public:
			void setcolor(string col)
			{
				color=col;
			}
			string getColor()
			{
				return color;
			}
			void setarea(float are)
			{
				area=are;
			}
			float getArea()
			{
				return area;
			}
			
			
			void Display()
			{
				cout<<"Area of Circule is: "<<endl;
				cout<<"Area of Ractangle is: "<<endl;
				cout<<"Color of Circule is: "<<endl;
				cout<<"Color of Ractangle is: "<<endl;	
			}
		
		
};
class Circule:public Shape{
	public:
		float radius;
		
};
class Rectangle:public Shape{
	public:
		float length,width;
			
}; 
			
int main()
{
	Shape obj;
	obj.Display();
     return 0;
}
