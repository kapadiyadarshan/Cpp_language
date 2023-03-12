/*
Calculate an Electricity Bill of a House of one month
based on total units burned. Develop a C++ solution for
this calculation.
*/

#include<iostream>
using namespace std;

class Electricity
{
    public :
        float meter_no;
        float present_reading;
        float previous_reading;
        float consumption;

        float energy_charge;
        float FPPPA;
        float fixed_charge = 25;
        float total_charge;
        float gov_duty;
        float bill_with_duty;
        float previous_dues;
        float other;
        float delay;
        float amount_due;

        Electricity()
        {
            admin();
            process();
            bill();
        }


        void admin()
        {
            cout << "\tEnter Meter Details\n\n";

            cout << "Meter Number = ";
            cin  >> meter_no;

            cout << "Present Reading = ";
            cin  >> present_reading;

            cout << "Previous Reading = ";
            cin  >> previous_reading;

            consumption = present_reading-previous_reading;
        }
        void process()
        {
            if(consumption <= 50)
            {
                energy_charge = (consumption*3.20);
            }
            else if(consumption <= 100)
            {
                energy_charge = ((consumption-50)*3.65)+(50*3.20);
            }
            else if(consumption <= 250)
            {
                energy_charge = ((consumption-100)*4.25)+(50*3.20)+(50*3.65);
            }
            else
            {
                energy_charge = ((consumption-250)*5.05)+(50*3.20)+(50*3.65)*(150*4.25);
            }

            FPPPA = consumption*2.92;

            total_charge = energy_charge + FPPPA + fixed_charge;

            gov_duty = (total_charge*15)/100;

            bill_with_duty = total_charge + gov_duty;

            cout << "Enter previous dues = ";
            cin  >> previous_dues;

            cout << "Other debit or Credit = ";
            cin  >> other;

            cout << "Delay payment charges = ";
            cin  >> delay;

            amount_due = bill_with_duty + previous_dues + other + delay; 
        }

        void bill()
        {
            system("cls");
            cout << "---------------------------------------------------------------\n";
            cout << "\t  Your Bill\n";
            cout << "\t   " << (int)amount_due <<".00";
            cout << "\n---------------------------------------------------------------\n";

            cout << "\n\tMeter Details\n";

            cout << "---------------------------\n";
            cout << "| Present          " << present_reading <<"  |\n";
            cout << "| reading                |\n";
            cout << "| Previous         " << previous_reading <<"  |\n";
            cout << "| reading                |\n";
            cout << "| Multiplier         x1  |\n";
            cout << "| ______________________ |\n";
            cout << "| consumption        " << consumption << "  |\n";
            cout << "---------------------------\n\n";


            cout << "\tBill Details\n";
            cout << "---------------------------------------------------------------\n";
            cout << "Energy Charges                                        " << energy_charge <<endl;
            cout << "FPPPA charges @292(paisa/unit)                        " << FPPPA <<endl;
            cout << "Fixed charges                                         " << fixed_charge <<endl;
            cout << "Total charges                                         " << total_charge <<endl;
            cout << "Govt duty @15%                                        " << gov_duty <<endl;
            cout << "Bill amount with govt duty                            " << bill_with_duty <<endl;
            cout << "Previous dues                                         " << previous_dues <<endl;
            cout << "Other debit or credit                                 " << other <<endl;
            cout << "Delay Payment charges                                 " << delay <<endl;
            cout << "Amount Due                                            " << amount_due <<endl;
            cout << "---------------------------------------------------------------\n";
        }
};

int main()
{
    Electricity o1;
    return 0;
}