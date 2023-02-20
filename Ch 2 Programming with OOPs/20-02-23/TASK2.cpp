#include<iostream>
using namespace std;

class car
{
    public :
        int id;
        char company_name[100];
        char color[100];
        char model[100];
        int release_year;
};

int main()
{
    car bmw, audi, tata, mahindra;

    cout << "enter id = ";                cin >> bmw.id;
    cout << "enter company name = ";      cin >> bmw.company_name;
    cout << "enter color = ";             cin >> bmw.color;
    cout << "enter model = ";             cin >> bmw.model;
    cout << "enter release year = ";      cin >> bmw.release_year;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "enter id = ";                cin >> audi.id;
    cout << "enter company name = ";      cin >> audi.company_name;
    cout << "enter color = ";             cin >> audi.color;
    cout << "enter model = ";             cin >> audi.model;
    cout << "enter release year = ";      cin >> audi.release_year;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "enter id = ";                cin >> tata.id;
    cout << "enter company name = ";      cin >> tata.company_name;
    cout << "enter color = ";             cin >> tata.color;
    cout << "enter model = ";             cin >> tata.model;
    cout << "enter release year = ";      cin >> tata.release_year;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "enter id = ";                cin >> mahindra.id;
    cout << "enter company name = ";      cin >> mahindra.company_name;
    cout << "enter color = ";             cin >> mahindra.color;
    cout << "enter model = ";             cin >> mahindra.model;
    cout << "enter release year = ";      cin >> mahindra.release_year;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "id = " << bmw.id << endl
         << "Company name = " << bmw.company_name << endl
         << "Color = " << bmw.color << endl
         << "model = " << bmw.model << endl
         << "release year = " << bmw.release_year << endl;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "id = " << audi.id << endl
         << "Company name = " << audi.company_name << endl
         << "Color = " << audi.color << endl
         << "model = " << audi.model << endl
         << "release year = " << audi.release_year << endl;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "id = " << tata.id << endl
         << "Company name = " << tata.company_name << endl
         << "Color = " << tata.color << endl
         << "model = " << tata.model << endl
         << "release year = " << tata.release_year << endl;

    cout <<endl << "------------------------------------------------------------"<<endl <<endl;

    cout << "id = " << mahindra.id << endl
         << "Company name = " << mahindra.company_name << endl
         << "Color = " << mahindra.color << endl
         << "model = " << mahindra.model << endl
         << "release year = " << mahindra.release_year << endl;

    return 0;
}