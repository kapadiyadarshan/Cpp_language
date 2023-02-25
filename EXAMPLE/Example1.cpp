#include<iostream>
#include<string.h>
using namespace std;

class Darshan
{
    private :
        char name[50];
        int age;
    
    public :
        Darshan()              // Default constructor
        {
            cout << "Enter Name = ";    fflush(stdin);
            gets(this->name);

            cout << "Enter Age = ";
            cin  >> this->age;
        }

        Darshan(char name[],int age)        // Perameterized constructor
        {
            strcpy(this->name,name);
            this->age = age;
        }

        ~Darshan()          // Destructor
        {
            cout << "Objects is deleted" <<endl;
        }

        void getData()
        {
            cout << "Name = " << name <<endl
                 << "Age = "  << age  <<endl; 
        }
};

int main()
{
    Darshan D1("Darshan",23);
    Darshan D2("Krishna",20);
    Darshan D3;
    Darshan D4("Dhruv",16);
    Darshan D5;

    cout << "---------------------------------------------" <<endl;

    D1.getData();
    D2.getData();
    D3.getData();
    D4.getData();
    D5.getData();

    return 0;
}