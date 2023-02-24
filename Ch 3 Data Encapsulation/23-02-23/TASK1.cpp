#include<iostream>
using namespace std;

/*  WAP to get and display N numbers of Hotels and static
    information using encapsulation with array of objects
    member by including below mentioned attributes:
    - hotel_id
    - hotel_name
    - hotel_type (like hotel or motel)
    - hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
    - hotel_location (city name)
    - hotel_establish_year
    - hotel_staff_quantity
    - hotel_room_quantity*/

class Hotel
{
    private :
        int hotel_id;
        char hotel_name[100];
        char hotel_type[100];
        int hotel_rating;
    public :
        static char hotel_location[100];
    private :
        int hotel_establish_year;
        int hotel_staff_quantity;
        int hotel_room_quantity;
    
    public :
        void setData()
        {
            cout << "Enter id = ";
            cin  >> this->hotel_id;

            cout << "Enter name = ";        fflush(stdin);    
            gets(this->hotel_name);

            cout << "Enter hotel type (hotel/motel) = ";     fflush(stdin);
            gets(this->hotel_type);

            cout << "Enter rating(1-7 star) = ";
            cin  >> this->hotel_rating;

            cout << "Enter establish year = ";
            cin  >> this->hotel_establish_year;

            cout << "Enter staff quantity = ";
            cin  >> this->hotel_staff_quantity;

            cout << "Enter room quantity = ";
            cin  >> this->hotel_room_quantity;
        }

        void getData()
        {
            cout << "id = " << hotel_id << endl
                 << "Name = " << hotel_name << endl
                 << "Type = " << hotel_type << endl
                 << "Rating = " << hotel_rating << endl
                 << "location = " << hotel_location << endl
                 << "Establish Year = " << hotel_establish_year << endl
                 << "Staff Quantity = " << hotel_staff_quantity << endl
                 << "Room Quantity = " << hotel_room_quantity << endl;
        }
};

char Hotel :: hotel_location[100] = "Surat";

int main()
{
    int n,i;
    cout << "Enter Hotel Number = ";
    cin  >> n;

    cout <<endl <<"-----------------------------------------" <<endl <<endl;

    Hotel H[n];

    for(i=0; i<n; i++)
    {
        cout << "Enter " << i+1 << " Hotel's details" << endl;

        H[i].setData();

        cout <<endl <<"-----------------------------------------" <<endl <<endl;
    }

    for(i=0; i<n; i++)
    {
        cout <<endl <<"-----------------------------------------" <<endl <<endl;

        H[i].getData();
    }
        
    return 0;
}
