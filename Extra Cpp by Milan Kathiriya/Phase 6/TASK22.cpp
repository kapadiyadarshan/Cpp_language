/*
    A Global survey held to collect information about
    hotels all around the world. Provide a C++ solution to
    create a class Hotel with fields like
    - hotel_id
    - hotel_name
    - hotel_type
    - hotel_staff_size
    - hotel_room_size
    - hotel_establish_year
    - hotel_country
    - hotel_rating_
    - hotel_website
    Illustrate the use of strict encapsulation with this keyword.
*/

#include<iostream>
using namespace std;

class Hotel
{
    private :
        int hotel_id;
        char hotel_name[100];
        char hotel_type[100];
        int hotel_staff_size;
        int hotel_room_size;
        int hotel_establish_year;
        static char hotel_country[100];
        int hotel_rating;
        char hotel_website[100];

    public :
        Hotel()
        {
            cout << "id = ";
            cin  >> this->hotel_id;

            cout << "Name = ";          fflush(stdin);
            cin  >> this->hotel_name;

            cout << "Type = ";          fflush(stdin);
            cin  >> this->hotel_type;

            cout << "Staff = ";
            cin  >> this->hotel_staff_size;

            cout << "Room = ";
            cin  >> this->hotel_room_size;

            cout << "Establish year = ";
            cin  >> this->hotel_establish_year;

            cout << "Rating = ";
            cin  >> this->hotel_rating;

            cout << "Website = ";          fflush(stdin);
            cin  >> this->hotel_website;

            cout << "--------------------------------------------------------\n";
        }

        void getData()
        {
            cout << "id = " << this->hotel_id <<endl;
            cout << "Name = " << this->hotel_name <<endl;
            cout << "Type = " << this->hotel_type <<endl;
            cout << "Staff = " << this->hotel_staff_size <<endl;
            cout << "Room = " << this->hotel_room_size <<endl;
            cout << "Establish year = " << this->hotel_establish_year <<endl;
            cout << "Country = " << this->hotel_country <<endl;
            cout << "Rating = " << this->hotel_rating <<endl;
            cout << "Website = " << this->hotel_website <<endl;

            cout << "--------------------------------------------------------\n";
        }
};

char Hotel :: hotel_country[100] = "India";

int main()
{
    int n,i;
    cout << "How many Hotels = ";
    cin  >> n;

    Hotel h[n];

    for(i=0; i<n; i++)
    {
        h[i].getData();
    }
    return 0;
}