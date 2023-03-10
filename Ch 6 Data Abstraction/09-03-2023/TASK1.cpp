/*
    WAP to abstract some attributes of class Admin to
    prevent them to be inherited by its child classes.
    - Class Admin -> Class Manager
    - Class Manager -> Class Employee
    - Class Admin has following members:
    - company_name
    - manager_salary
    - employee_salary
    - total_staff
    - total_annual_revenue
    - can_terminate
    - use all attributes accessibility in parent class and
    child class properly.
    - override a method myAccess() in both child
    classes to display all parent class’s members value
    accordingly.
*/

#include<iostream>
using namespace std;

class Admin
{
	private :
		int total_annual_revenue=35000000;
		char can_terminate[10]="yes";
		
	protected :
		char company_name[50]="SATYAM Embro";
		int manager_salary=34000;
		int employee_salary=15000;
		int total_staff=18;
		
	public :
		void myAccess()	
		{
            cout<<"-----------------------------------------\n";
            cout<<"       This is Admin details....\n";
            cout<<"-----------------------------------------\n";

			cout<<"Company Name : ";
			cout<<this->company_name<<endl;
			
			cout<<"Manager Salary : ";
			cout<<this->manager_salary<<endl;
			
			cout<<"Empoyee Salary : ";
			cout<<this->employee_salary<<endl;
			
			cout<<"Total Staff : ";
			cout<<this->total_staff<<endl;
			
			cout<<"Total Annual Revenue : ";
			cout<<this->total_annual_revenue<<endl;
			
			cout<<"Can Terminate : ";
			cout<<this->can_terminate<<endl;
		}
};

class Manager :protected Admin
{
	public :
		
		void myAccess()
		{
			cout<<"\n-----------------------------------------\n";
			cout<<"       This is Manager Details : "<<endl;
            cout<<"-----------------------------------------\n";

			cout<<"Company Name : ";
			cout<<this->company_name<<endl;

            cout<<"Manager Salary : ";
			cout<<this->manager_salary<<endl;
			
			cout<<"Employee Salary : ";
			cout<<this->employee_salary <<endl;
			
			cout<<"Total Staff : ";
			cout<<this->total_staff<<endl;
		}
};

class Employee : protected Manager
{
	public :
		void myAccess()
		{
			cout<<"\n-----------------------------------------\n";
			cout<<"        This is Employee Details : "<<endl;
            cout<<"-----------------------------------------\n";

			cout<<"Company Name : ";
			cout<<this->company_name<<endl;

            cout<<"Employee Salary : ";
			cout<<this->employee_salary <<endl;
			
			cout<<"Total Staff : ";
			cout<<this->total_staff<<endl;
		}
		
};

int main()
{
	Admin o1;
	
	Manager o2;
	
	Employee o3;
	cout<<"\nthis is admin Info..\n";
	
	
	o1.myAccess();
	o2.myAccess();
	o3.myAccess();
	return 0;
}