#include<iostream>
using namespace std;

/*  WAP to get and display 5 Customers
    information using encapsulation by including
    below mentioned attributes:
    - cust_id
    - cust_name
    - cust_age
    - cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
    - cust_mobile_number
    - cust_city
    - cust_simcard_validity (in years) */

class customer
{
    private :
        int cust_id;
        char cust_name[100];
        int cust_age;
        char cust_telecom_brand_name[100];
        char cust_mobile_number[100];
        char cust_city[100];
        char cust_simcard_validity[100];

    public :
        void setData()              //setter
        {
            cout << "Enter id = ";
            cin  >> this->cust_id;

            cout << "Enter Name = ";            fflush(stdin);
            gets(this->cust_name);

            cout << "Enter Age = ";
            cin  >> this->cust_age;

            cout << "Enter Telecom Brand Name = ";      fflush(stdin);
            gets(this->cust_telecom_brand_name);            

            cout << "Enter Mobile Number = ";       fflush(stdin);
            gets(this->cust_mobile_number);         

            cout << "Enter City = ";        fflush(stdin);
            gets(this->cust_city);          

            cout << "Enter Simcard Validity = ";        fflush(stdin);
            gets(this->cust_simcard_validity);          
        }

        void getData()              //getter
        {
            cout << "id = " << cust_id << endl
                 << "Name = " << cust_name << endl
                 << "Age = " << cust_age << endl
                 << "Telecom Brand Name = " << cust_telecom_brand_name << endl
                 << "Mobile Number = " << cust_mobile_number << endl
                 << "City = " << cust_city << endl
                 << "Simcard Validity = " << cust_simcard_validity;
        }
};

int main()
{
    int n,i;
    cout << "How many customer = ";
    cin  >> n;

    customer C[n];

    for(i=0;i<n; i++)
    {
        cout << "Enter " << i+1 << " Customer details" << endl;

        C[i].setData();

        cout <<endl << "---------------------------------------------------" <<endl <<endl;
    }

    for(i=0;i<n; i++)
    {

        cout <<endl << "---------------------------------------------------" <<endl;

        C[i].getData();
    }

    return 0;
}