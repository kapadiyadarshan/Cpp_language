#include<iostream>
using namespace std;

class A
{
    public :
        int id;
        string name;
        string role;
        int salary;
        int experience;
        static string comp_name;
        string address;
        string email;
        string contact;

        void setDataA()
        {
            cout << "Enter id = ";
            cin  >> this->id;

            cout << "Enter Name = ";    fflush(stdin);
            cin  >> this->name;

            cout << "Enter Role = ";    fflush(stdin);
            cin  >> this->role;
        }
};

class B : public A
{
    public :
        void setDataB()
        {
            cout << "Enter Salary = ";
            cin  >> this->salary;

            cout << "Enter Experience = ";
            cin  >> this->experience;
        }
};

class C : public B
{
    public :
        void setDataC()
        {
            //cout << "Company Name = ";  fflush(stdin);
            //cin  >> this->comp_name;

            cout << "Enter Address = ";     fflush(stdin);
            cin  >> this->address;
        }

        void getDataC()
        {
            cout << "Name = " << this->name <<endl;
            cout << "Role = " << this->role <<endl;
            cout << "Salary = " << this->salary <<endl;
        }

};

class D : public C
{
    public :
        void setDataD()
        {
            cout << "Enter E-mail = ";      fflush(stdin);
            cin  >> this->email;

            cout << "Enter Contact = ";     fflush(stdin);
            cin  >> this->contact;
        }

        void getDataD()
        {
            cout << "Id = " << this->id <<endl;
            cout << "Name = " << this->name <<endl;
            cout << "Role = " << this->role <<endl;
            cout << "Salary = " << this->salary <<endl;
            cout << "Experience = " << this->experience <<endl;
            cout << "Company Name = " << this->comp_name <<endl;
            cout << "Address = " << this->address <<endl;
            cout << "E-mail = " << this->name <<endl;
            cout << "Contact = " << this->contact <<endl;
        }
};

string A :: comp_name = "Red and White Institute";

int main()
{
    int n,i,choice;
    cout << "How Many Employees In Company = ";
    cin  >> n;

    D o[n];

    for(i=0; i<n; i++)
    {
        o[i].setDataA();
        o[i].setDataB();
        o[i].setDataC();
        o[i].setDataD();

        cout << "---------------------------------------------------------\n";
    }

    do
    {
        cout<<endl<<endl<<"-----------------------------------"<<endl;
		cout<<"Press 1 For Get All Information Of Employee"<<endl;
		cout<<"Press 2 For Get Name,Role,Salary Of All Employee "<<endl;
		cout<<"Press 0 For Exit."<<endl;

        cin >> choice;

        switch(choice)
        {
                case 1:
                    cout<<"\n-----------------------------------------\n";
                    for(i=0;i<n;i++)
                    {
                        o[i].getDataD();

                        cout << "---------------------------------------------------------\n";
                    }
                    break;
                
                case 2:
                    cout<<"\n-----------------------------\n";
                    for(i=0;i<n;i++)
                    {
                        o[i].getDataC();

                        cout << "---------------------------------------------------------\n";
                    }
                    break;

                case 0:
                    return 0;
                    break;

                default :
                    cout<<"\n--------------------------\n";
                    cout<<"\nInvalid Choice ...\n";
                    break;
        }

    }while(choice != 0);

    return 0;
}