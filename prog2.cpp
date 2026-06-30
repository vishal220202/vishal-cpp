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
		  	salary=sal;
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

int main()
{
    Employee emp;
    
    emp.setname("Rahul");
    emp.setsalary(70000);
    emp.setdesignation("Full-Stack-Web-Devloper");
    
    cout<<"Name: "<<emp.getName()<<endl;
    cout<<"Salary: "<<emp.getSalary()<<endl;
    cout<<"Designation: "<<emp.getDesignation()<<endl;
    
    return 0;
}
