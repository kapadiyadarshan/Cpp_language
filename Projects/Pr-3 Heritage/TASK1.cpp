#include<iostream>
using namespace std;

class shape
{
    public :
        float width;
        float height;
};

class triangle : public shape
{
    public :
        triangle()
        {
            cout << "Triangle\n\n";
            cout << "Enter Width = ";
            cin  >> width;

            cout << "Enter Height = ";
            cin  >> height;

            cout << "Area is " << (0.5*width*height) <<endl ;
        }

};

class rectangle : public shape
{
    public :
        rectangle()
        {
            cout << "Rectangle\n\n";
            cout << "Enter Width = ";
            cin  >> width;

            cout << "Enter Height = ";
            cin  >> height;

            cout << "Area is " << (width*height) <<endl;
        }
};

int main()
{
    triangle o1;

    cout << "\n-----------------------------------------------------------------\n\n";

    rectangle o2;

    return 0;
}