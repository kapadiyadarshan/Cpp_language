#include<iostream>
using namespace std;
/*
WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature attribute in float
- Class Q has following members: toFehrenheit() method
- Class R has following members: toKelvin() method
*/

class P
{
    public :
        float temperature;

        void temp()
        {
            cout << "Enter Temperature (C) = ";
            cin  >> temperature;
        }
};

class Q : public P
{
    public :
        float F;
        void toFehrenheit()
        {
            F = (1.8*temperature)+32;

            cout << "Temperature is Fehrenheit = " << F <<endl;
        }
};

class R : public Q
{
    public :
        void toKelvin()
        {
            float K;

            K = (F-32)*(0.555556)+273.15;

            cout << "Temperature is Kelvin = " << K <<endl;
        }
};

int main()
{
    R o1;

    o1.temp();
    o1.toFehrenheit();
    o1.toKelvin();
    return 0;
}