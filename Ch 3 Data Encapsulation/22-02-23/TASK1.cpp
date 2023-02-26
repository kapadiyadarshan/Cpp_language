#include<iostream>
using namespace std;

/*  WAP to get and display 5 Students information using
    encapsulation by including below mentioned
    attributes:
    - stu_id
    - stu_name
    - stu_age
    - stu_course
    - stu_email
    - stu_city
    - stu_college*/

class student 
{
    private :
        int stu_id;
        char stu_name[100];
        int stu_age;
        char stu_course[100];
        char stu_email[100];
        char stu_city[100];
        char stu_college[100];

    public :        
        void setData()      //Setter
        {
            cout << "Enter id = ";
            cin  >> stu_id;

            cout << "Enter name = ";        fflush(stdin);
            gets(this->stu_name);

            cout << "Enter age = ";
            cin  >> stu_age;

            cout << "Enter course = ";        fflush(stdin);
            gets(this->stu_course);

            cout << "Enter email = ";        fflush(stdin);
            gets(this->stu_email);

            cout << "Enter city = ";        fflush(stdin);
            gets(this->stu_city);

            cout << "Enter college = ";        fflush(stdin);
            gets(this->stu_college);

        }

        void getData()      //Getter
        {
            cout << "id = " << this->stu_id << endl
                 << "Name = " << this->stu_name << endl
                 << "Age = " << this->stu_age << endl
                 << "Course = " << this->stu_course << endl
                 << "Email = " << this->stu_email << endl
                 << "City = " << this->stu_city << endl
                 << "College = " << this->stu_college << endl;
        }
};

int main()
{
    student S[100];

    int n,i;
    cout << "How many students in your class = ";
    cin  >> n;

    cout << endl << "-------------------------------------------------"<< endl << endl;

    for(i=0; i<n; i++)
    {
        cout << "Enter " << i+1 <<" student's data" <<endl;
        S[i].setData();

        cout <<"-----------------------------------------------------" << endl ;
    }

    for(i=0; i<n; i++)
    {
        cout <<"-----------------------------------------------------" << endl; 

        S[i].getData();
    }

    return 0;
}