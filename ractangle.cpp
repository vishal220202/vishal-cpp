#include<iostream>

using namespace std;

class Rectangle{
	private:
		float length,width;
		
		public:	
		void setlenth(float len)
		{
			length=len;
		}
		 float getLength()
		 {
		 	return length;
		 }
		 void setwidth(float wid)
		 {
		 	width=wid;
		 }
		  float getWidth()
		  {
		  	return width;
		  }
		  
		  void display()
		  {
		  	cout<<"Enter length: ";
		  	cin>>length;
		  	cout<<"Enter width: ";
		  	cin>>width;
		  }
		  
		  void Calculatearea()
		  {
		  	float area=0.5*length*width;
		  	cout<<"Area of rectangle is: "<<area<<endl;
		  }
};

int main()
{
	Rectangle obj;
	obj.display();
	obj.Calculatearea();
	
	return 0;
}

