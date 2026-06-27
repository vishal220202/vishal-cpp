#include<iostream>

using namespace std;

class Employee{
	private:
		string name;
		int salary;
		string designation;
		
		public:
		  void setname(string n)
		  {
		  	name=n;
		  }
		  string getName()
		  {
		  	return name;
		  }
		  void setsalary(int sal)
		  {
		  	salary=s;
		  }
		  int getSalary()
		  {
		  	return salary;
		  }
		  void setdesignation(string desig)
		  {
		  	designation=desig;
		  }
		  string getDesignation()
		  {
		  	return designation;
		  }
};
