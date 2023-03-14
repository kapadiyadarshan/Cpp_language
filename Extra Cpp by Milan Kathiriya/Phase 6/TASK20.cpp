/*
    A Higher Secondary School opens after COVID-19 crisis
    and admission process will be starting for registration
    of students. Help administration department for
    registering student information such liker
    - stu_id
    - stu_name
    - stu_age
    - stu_course
    - stu_email
    - stu_college
*/

#include<iostream>
using namespace std;

class School
{
    private :
        int stu_id;
        char stu_name[100];
        int stu_age;
        char stu_course[100];
        char stu_email[100];
        char stu_college[100];

    public :
        School()
        {
            cout << "id = ";
            cin  >> this->stu_id;

            cout << "Name = ";          fflush(stdin);
            gets(this->stu_name);

            cout << "Age = ";
            cin  >> this->stu_age;

            cout << "Course = ";          fflush(stdin);
            gets(this->stu_course);

            cout << "Email = ";          fflush(stdin);
            gets(this->stu_email);

            cout << "College = ";          fflush(stdin);
            gets(this->stu_college);

            cout << "-----------------------------------------------\n";
        }

        void getData()
        {
            cout << " id = " <<this->stu_id <<endl;
            cout << " Name = " <<this->stu_name <<endl;
            cout << " Age = " <<this->stu_age <<endl;
            cout << " Course = " <<this->stu_course <<endl;
            cout << " E-mail = " <<this->stu_email <<endl;
            cout << " College = " <<this->stu_college <<endl;

            cout << "\n-----------------------------------------------\n";
        }
};

int main()
{
    int n,i;

    cout << "How many students = ";
    cin  >> n;

    School A[n];

    for(i=0; i<n; i++)
    {
        A[i].getData();
    }
    return 0;
}