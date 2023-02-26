#include<iostream>
using namespace std;

/*  WAP to get and display N numbers of Diamond
    companies information using encapsulation and use of
    parameterised constructor by including below
    mentioned attributes:
    - comp_id
    - comp_name
    - comp_staff_quantity
    - comp_revenue (per year)
    - comp_import_raw_diamonds (no. of raw diamonds imported per year)
    - comp_export_diamonds (no. of diamonds per year)
    - comp_ceo (name of CEO of the company)
*/

class company
{
    private : 
        int comp_id;
        char comp_name[100];
        int comp_staff_quantity;
        int comp_revenue;
        int comp_import_raw_diamonds;
        int comp_export_diamonds;
        char comp_ceo[100];

    public :
        int i=1;
        company()
        {
            cout << "Enter " << i++ << " Company Details" <<endl;

            cout << "Enter id = "; 
            cin  >> this->comp_id;

            cout << "Enter Name = ";        fflush(stdin);
            gets(comp_name);

            cout << "Enter Staff Quantity = ";
            cin  >> this->comp_staff_quantity;

            cout << "Enter Revenue (per year) = ";
            cin  >> this->comp_revenue;

            cout << "Enter Import Raw diamonds = ";
            cin  >> this->comp_import_raw_diamonds;

            cout << "Enter Export diamonds = ";
            cin  >> this->comp_export_diamonds;

            cout << "Enter CEO  = ";        fflush(stdin);
            gets(comp_ceo);

            cout <<endl << "-------------------------------------"<<endl <<endl;
        }

        void getData()
        {
            cout << "Id = "    << this->comp_id    <<endl
                 << "Name = "    << this->comp_name    <<endl
                 << "Staff Quantity =  " << this->comp_staff_quantity   <<endl
                 << "Revenue = "    << this->comp_revenue    <<endl
                 << "Import Raw diamonds = "    << this->comp_import_raw_diamonds    <<endl
                 << "Export Raw diamonds = "    << this->comp_export_diamonds    <<endl
                 << "CEO = "    << this->comp_ceo    <<endl;
        }
};

int main()
{
    int n,i;
    cout << "Enter Company Numbers = ";
    cin  >> n;

    company C[n];

    for(i=0; i<n; i++)
    {
        cout <<endl << "-------------------------------------"<<endl <<endl;

        C[i].getData();
    }
    return 0;
}