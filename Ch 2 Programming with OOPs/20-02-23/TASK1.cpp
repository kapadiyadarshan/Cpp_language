#include<iostream>
using namespace std;

class employees
{
    public :
        int emp_id;
        char emp_name[100];
        char emp_role[100];
        int emp_age;
        int emp_salary;
        int emp_experience;
        char emp_city[100];
        char emp_company_name[100];
};

int main()
{
    employees e1,e2,e3,e4,e5;
 
    cout << "Enter 1st Employee details" << endl; 
    cout << "Enter id = ";                      cin >> e1.emp_id;
    cout << "Enter Name = ";                    cin >> e1.emp_name;
    cout << "Enter Role = ";                    cin >> e1.emp_role;
    cout << "Enter Age = ";                     cin >> e1.emp_age;
    cout << "Enter Salary = ";                  cin >> e1.emp_salary;
    cout << "Enter Experience = ";              cin >> e1.emp_experience;
    cout << "Enter City = ";                    cin >> e1.emp_city;
    cout << "Enter Company name = ";            cin >> e1.emp_company_name;

    cout << "Enter 2nd Employee details" << endl; 
    cout << "Enter id = ";                      cin >> e2.emp_id;
    cout << "Enter Name = ";                    cin >> e2.emp_name;
    cout << "Enter Role = ";                    cin >> e2.emp_role;
    cout << "Enter Age = ";                     cin >> e2.emp_age;
    cout << "Enter Salary = ";                  cin >> e2.emp_salary;
    cout << "Enter Experience = ";              cin >> e2.emp_experience;
    cout << "Enter City = ";                    cin >> e2.emp_city;
    cout << "Enter Company name = ";            cin >> e2.emp_company_name;

    cout << "Enter 3rd Employee details" << endl; 
    cout << "Enter id = ";                      cin >> e3.emp_id;
    cout << "Enter Name = ";                    cin >> e3.emp_name;
    cout << "Enter Role = ";                    cin >> e3.emp_role;
    cout << "Enter Age = ";                     cin >> e3.emp_age;
    cout << "Enter Salary = ";                  cin >> e3.emp_salary;
    cout << "Enter Experience = ";              cin >> e3.emp_experience;
    cout << "Enter City = ";                    cin >> e3.emp_city;
    cout << "Enter Company name = ";            cin >> e3.emp_company_name;

    cout << "Enter 4th Employee details" << endl; 
    cout << "Enter id = ";                      cin >> e4.emp_id;
    cout << "Enter Name = ";                    cin >> e4.emp_name;
    cout << "Enter Role = ";                    cin >> e4.emp_role;
    cout << "Enter Age = ";                     cin >> e4.emp_age;
    cout << "Enter Salary = ";                  cin >> e4.emp_salary;
    cout << "Enter Experience = ";              cin >> e4.emp_experience;
    cout << "Enter City = ";                    cin >> e4.emp_city;
    cout << "Enter Company name = ";            cin >> e4.emp_company_name;

    cout << "Enter 5th Employee details" << endl;
    cout << "Enter id = ";                      cin >> e5.emp_id;
    cout << "Enter Name = ";                    cin >> e5.emp_name;
    cout << "Enter Role = ";                    cin >> e5.emp_role;
    cout << "Enter Age = ";                     cin >> e5.emp_age;
    cout << "Enter Salary = ";                  cin >> e5.emp_salary;
    cout << "Enter Experience = ";              cin >> e5.emp_experience;
    cout << "Enter City = ";                    cin >> e5.emp_city;
    cout << "Enter Company name = ";            cin >> e5.emp_company_name;

    cout <<endl <<"----------------------------------------------"<<endl <<endl;

    cout << "1st Emplooyee details" <<endl;
    cout << "id = " << e1.emp_id << endl;
    cout << "Name = " << e1.emp_name << endl;
    cout << "Role = " << e1.emp_role << endl;
    cout << "Age = " << e1.emp_age << endl;
    cout << "Salary = " << e1.emp_salary << endl;
    cout << "Experience = " << e1.emp_experience << endl;
    cout << "City = " << e1.emp_city << endl;
    cout << "Company name = " << e1.emp_company_name << endl;

    cout <<endl <<"----------------------------------------------"<<endl <<endl;

    cout << "2nd Emplooyee details" <<endl;
    cout << "id = " << e2.emp_id << endl;
    cout << "Name = " << e2.emp_name << endl;
    cout << "Role = " << e2.emp_role << endl;
    cout << "Age = " << e2.emp_age << endl;
    cout << "Salary = " << e2.emp_salary << endl;
    cout << "Experience = " << e2.emp_experience << endl;
    cout << "City = " << e2.emp_city << endl;
    cout << "Company name = " << e2.emp_company_name << endl;

    cout <<endl <<"----------------------------------------------"<<endl <<endl;

    cout << "3rd Emplooyee details" <<endl;
    cout << "id = " << e3.emp_id << endl;
    cout << "Name = " << e3.emp_name << endl;
    cout << "Role = " << e3.emp_role << endl;
    cout << "Age = " << e3.emp_age << endl;
    cout << "Salary = " << e3.emp_salary << endl;
    cout << "Experience = " << e3.emp_experience << endl;
    cout << "City = " << e3.emp_city << endl;
    cout << "Company name = " << e3.emp_company_name << endl;

    cout <<endl <<"----------------------------------------------"<<endl <<endl;

    cout << "4th Emplooyee details" <<endl;
    cout << "id = " << e4.emp_id << endl;
    cout << "Name = " << e4.emp_name << endl;
    cout << "Role = " << e4.emp_role << endl;
    cout << "Age = " << e4.emp_age << endl;
    cout << "Salary = " << e4.emp_salary << endl;
    cout << "Experience = " << e4.emp_experience << endl;
    cout << "City = " << e4.emp_city << endl;
    cout << "Company name = " << e4.emp_company_name << endl;

    cout <<endl <<"----------------------------------------------"<<endl <<endl;

    cout << "5th Emplooyee details" <<endl;
    cout << "id = " << e5.emp_id << endl;
    cout << "Name = " << e5.emp_name << endl;
    cout << "Role = " << e5.emp_role << endl;
    cout << "Age = " << e5.emp_age << endl;
    cout << "Salary = " << e5.emp_salary << endl;
    cout << "Experience = " << e5.emp_experience << endl;
    cout << "City = " << e5.emp_city << endl;
    cout << "Company name = " << e5.emp_company_name << endl;

    cout <<endl <<"----------------------------------------------"<<endl <<endl;

    return 0;
}