/*
A Prime School wants an automate system for generating
students grades.
If marks in Maths>80, Phy>75 and Chem>72 then generate
Grade A.
If marks in 60<=Maths<=80, 55<=Phy<=75 and 50<=Chem<=72
then generate Grade B.
If marks in 40<=Maths<60, 35<=Phy<55 and 35<=Chem<50 then
generate Grade C.
Apply Grade D (Fail) if minimum criteria of marks doesn’t
satisfy bt any student.
Write a C++ Program for generating total N number of
students grades for this Prime School.
*/

#include<iostream>
using namespace std;

class Grade
{
    private :
        int maths_mark;
        int phy_marks;
        int chem_marks;

    public :
        Grade()
        {
            cout << "Enter Maths Marks = ";
            cin  >> maths_mark;

            cout << "Enter Physics Marks = ";
            cin  >> phy_marks;

            cout << "Enter Chemistry Marks = ";
            cin  >> chem_marks;

            if((maths_mark > 80) && (phy_marks > 75) && (chem_marks > 72))
            {
                cout << "A Grade\n";
            }
            else if((maths_mark >= 60 && maths_mark <= 80) && (phy_marks >= 55 && phy_marks <= 75) && (chem_marks >= 50 && chem_marks <= 72))
            {
                cout << "B Grade\n";
            }
            else if((maths_mark >= 40 && maths_mark < 60) && (phy_marks >= 35 && phy_marks < 55) && (chem_marks >= 35 && chem_marks < 50))
            {
                cout << "C Grade\n";
            }
            else
            {
                cout << "D Grade\n";
            }

            cout << "---------------------------------------------\n";
        }
};

int main()
{
    int n;
    cout << "How many students = ";
    cin  >> n;

    Grade o1[n];
    return 0;
}