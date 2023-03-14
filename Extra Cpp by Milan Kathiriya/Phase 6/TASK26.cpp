#include<iostream>
using namespace std;

class P
{
    protected :
        int id;
        char name[100];
        int age;
        int salary;
        int experience;
        char email[100];
        static char company_name[100];
        char city[100];
        char role[100];

    public :
        void setDataA()
        {
            cout <<"\n-------------------------------------------------------\n\n";
            
            cout << "Enter id = ";
            cin  >> this->id;

            cout << "Enter Name = ";        fflush(stdin);
            gets(this->name);

            cout << "Enter Age = ";
            cin  >> this->age;
        }
};

class Q : public P
{
    public :
        void setDataB()
        {
            cout << "Enter Role = ";        fflush(stdin);
            gets(this->role);

            cout << "Enter Salary = ";
            cin  >> this->salary;

            cout << "Enter Experience = ";
            cin  >> this->experience;
        }

};

class R : public Q
{
    public :
        void setDataC()
        {
            cout << "Enter Email = ";        fflush(stdin);
            gets(this->email);

            cout << "Enter City = ";        fflush(stdin);
            gets(this->city);
        }

        void getDataC()
        {
            cout << "id = " << this->id <<endl;
            cout << "Role = " << this->role <<endl;
            cout << "Salary = " << this->salary <<endl;
        }
};

class S : public R
{
    public :
        void getDataD()
        {
            cout << "id = " << this->id <<endl;
            cout << "Name = " << this->name <<endl;
            cout << "Age = " << this->age <<endl;
            cout << "Salary = " << this->salary <<endl;
            cout << "Experience = " << this->experience <<endl;
            cout << "Email = " << this->email <<endl;
            cout << "Company Name = " << this->company_name <<endl;
            cout << "City = " << this->city <<endl;
            cout << "Role = " << this->role <<endl;
        }
};

char P::company_name[100] = "Satyam Solution";

int main()
{
    int n,i,choice;
    cout << "How many Employees = ";
    cin  >> n;

    S o[n];

    for(i=0; i<n; i++)
    {
        o[i].setDataA();
        o[i].setDataB();
        o[i].setDataC();
    }

    system("cls");

    cout << "Press 1 for all information of emplooyee\n";
    cout << "Press 2 for id,role,salary information of employee\n";

    cout <<"\n-------------------------------------------------------\n\n";

    cout << "Enter choice = ";
    cin  >> choice;

    cout <<"\n-------------------------------------------------------\n\n";

    switch(choice)
    {
        case 1 :
            for(i=0; i<n; i++)
            {
                cout <<"\n-------------------------------------------------------\n\n";
                o[i].getDataD();
            }
            break;

        case 2 :
            for(i=0; i<n; i++)
            {
                cout <<"\n-------------------------------------------------------\n\n";
                o[i].getDataC();
            }
            break;

        default :
            cout << "Invalid choice\n";
    }
    return 0;
}