#include<iostream>
using namespace std;

class Cafe
{
    private :
        int cafe_id;
        char cafe_name[100];
        char cafe_type[100];
        int cafe_rating;
        int cafe_establish_year;
        int cafe_staff_quantity;

    public :
        static char cafe_location[100];
    
    public :
        Cafe()
        {
            cout << "Enter Id = ";
            cin  >> this->cafe_id;

            cout << "Enter Name = ";    fflush(stdin);
            gets(cafe_name);

            cout << "Enter Type (Rooftop / Normal) = ";    fflush(stdin);
            gets(cafe_type);

            cout << "Enter Rating(1-5 star) = ";
            cin  >> this->cafe_rating;

            cout << "Enter Establish Year = ";
            cin  >> this->cafe_establish_year;

            cout << "Enter Staff Quantity = ";
            cin  >> this->cafe_staff_quantity;

            cout <<endl << "---------------------------------------------"<<endl <<endl;
        }

        void getData()
        {
            cout << "Id = "  << cafe_id <<endl;
            cout << "Name = "  << cafe_name <<endl;
            cout << "Type = "  << cafe_type <<endl;
            cout << "Rating = "  << cafe_rating <<endl;
            cout << "location = "  << cafe_location <<endl;
            cout << "Establish Year = "  << cafe_establish_year <<endl;
            cout << "Staff Quantity = "  << cafe_staff_quantity <<endl;
        }
};

char Cafe :: cafe_location[100] = "Surat";

int main()
{
    int n,i;
    cout << "Enter Numbers Of Cafe = ";
    cin  >> n;

    Cafe C[n];

    for(i=0; i<n; i++)
    {
        cout <<endl << "---------------------------------------------"<<endl <<endl;

        C[i].getData();
    }
    return 0;
}