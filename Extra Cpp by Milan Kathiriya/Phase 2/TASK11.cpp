/*
    A Mountain Tracker needs a Temperature Converter for
    maintaining his tracking at Mount Everest. Build
    temperature converter for that tracker using C++ as your
    primary language.
*/

#include<iostream>
using namespace std;

class Temperature
{
    private :
        float c;
        float F;
        float K;
        int choice;

    public :
        Temperature()
        {
            cout << "-----------------------------------------------------\n";
            cout << "Press 1 for input temperature in fahrenheit\n";
            cout << "Press 2 for input temperature in Kelvin\n";
            cout << "-----------------------------------------------------\n\n";

            cout << "Enter Choice = ";
            cin  >> choice;

            switch(choice)
            {
                case 1 :
                    Fahrenheit();
                    break;

                case 2 :
                    Kelvin();
                    break;

                default :
                    cout << "Invalid Choice\n";
            }
        }

        void Fahrenheit()
        {
            cout << "Enter Temperature(F) = ";
            cin  >> F;

            c = ((F-32)*5)/9;

            cout << "Temperature is Celcius = " << c <<endl;
        }

        void Kelvin()
        {
            cout << "Enter Temperature(K) = ";
            cin  >> K;

            c = K-273.15;

            cout << "Temperature is Celcius = " << c <<endl;
        }
};

int main()
{
    Temperature o1;
    return 0;
}