#include<iostream>
#include<fstream>
using namespace std;

class superMarket
{
	private :
		int product_code;
		float price;
		float discount;
		string product_name;
	
	public :
		void menu()
		{ 
			m:
			int choice;
			string email;
			string password;

			cout << "\t\t\t\t------------------------------------------------------\n";
			cout << "\t\t\t\t                                                      \n";
			cout << "\t\t\t\t               SuperMarket Main Menu                  \n";
			cout << "\t\t\t\t                                                      \n";
			cout << "\t\t\t\t------------------------------------------------------\n";
			cout << "\t\t\t\t                                                      \n";

			cout << "\t\t\t\t|		1) Administrator		|\n";
			cout << "\t\t\t\t|								|\n";
			cout << "\t\t\t\t|		2) Customer				|\n";
			cout << "\t\t\t\t|								|\n";
			cout << "\t\t\t\t|		3) Exit					|\n";
			cout << "\t\t\t\t|								|\n";

			cout << "\n\t\t\t Please Select(1-3) = ";
			cin  >> choice;

			switch(choice)
			{
				case 1 :
					cout << "\t\t\t Please Login \n";
					cout << "\t\t\t Enter Email =  ";
					cin  >> email;

					cout << "\t\t\t Enter Password =  ";
					cin  >> password;

					if(email == "darshan@gmail.com"  && password == "1234")
					{
						administrator();
					}
					else
					{
						cout << "Invalid Email or Password\nPlease try Again\n";
					}
					break;
				
				case 2 :
					{
						buyer();
					}

				case 3 : 
					{
						exit(0);
					}
				
				default :
					{
						cout << "Please select from the given option";
					}
			}
			goto m;
		}

		void administrator()
		{
			m:
			int choice;
			
			cout << "\n\n\n\t\t\t Administrator Menu";
			cout << "\n\t\t\t|___________1) Add The Product______________|";
			cout << "\n\t\t\t|                                           |";
			cout << "\n\t\t\t|___________2) Modify The Product___________|";
			cout << "\n\t\t\t|                                           |";
			cout << "\n\t\t\t|___________3) Delete The Product___________|";
			cout << "\n\t\t\t|                                           |";
			cout << "\n\t\t\t|___________4) Back To Main Menu____________|";

			cout << "\n\t\t\t Please Enter Your Choice(1-4) = ";
			cin  >> choice;

			switch(choice)
			{
				case 1 :
					add();
					break;

				case 2 :
					edit();
					break;

				case 3 :
					add();
					break;
				
				case 4 :
					menu();
					break;

				default :
					cout << "Invalid Choice !!!!";
			}
			goto m;
		}
		void buyer()
		{
			m:
			int choice;

			cout << "\n\n\n\t\t\t Buyer";
			cout << "\n\t\t\t|___________1) Buy Product______________|";
			cout << "\n\t\t\t|                                       |";
			cout << "\n\t\t\t|___________2) Go back__________________|\n";

			cout << "\n\t\t\t Enter Your Choice(1-2) = ";
			cin  >> choice;

			switch(choice)
			{
				case 1 :
					receipt();
					break;
					
				case 2 :
					menu();
					break;

				default :
					cout << "Invalid Choice\n";
			}
			goto m;
		}

		void add();
		void edit();
		void remove();
		void list();
		void receipt();
};

int main()
{
	
	return 0;
}