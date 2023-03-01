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

		void add()
		{
			m:
			fstream data;
			int c;
			int token=0;
			float p;
			float d;
			string n;

			cout << "\n\n\t\t\t Add New Product";
			cout << "\n\n\t Enter Product Code = ";
			cin  >> product_code;

			cout << "\n\n\t Name Of The Product = ";
			cin  >> product_name;

			cout << "\n\n\t Price Of The Product = ";
			cin  >> price;

			cout << "\n\n\t Discount Of The Product = ";
			cin  >> discount;

			data.open("database.txt", ios::in);

			if(!data)
			{
				data.open("database.txt", ios::app | ios::out);
				data << "  " << product_code << "  " << product_name << "  " << price << "  " << discount <<endl;
				data.close();  
			}
			else
			{
				data >> c >> n >> p >> d;

				while(!data.eof())
				{
					if(c == product_code)
					{
						token++;
					}
					data >> c >> n >> p >> d;
				}
				data.close();
			
				if(token==1)
				{
					goto m;
				}
				else
				{
					data.open("database.txt", ios::app | ios::out);
					data << "  " << product_code << "  " << product_name << "  " << price << "  " << discount <<endl;
					data.close();
				}
			}
			cout << "\n\n\t\tRecord inserted\n\n";
		}

		void edit()
		{
			fstream data,data1;
			int pkey;
			int token=0;
			int c;
			float p;
			float d;
			string n;

			cout << "\n\t\t\t Modify The Record";
			cout << "\n\t\t\t Product Code : ";
			cin  >> pkey;

			data.open("database.txt",ios::in);
			if(!data)
			{
				cout << "\n\nFile Doesn't exist !!!!";
			}
			else
			{
				data1.open("database1.txt",ios::app | ios::out);

				data >> product_code >> product_name >> price >> discount;

				while(!data.eof())
				{
					if(pkey==product_code)
					{
						cout << "\n\t\t Product New Code = ";
						cin  >> c;

						cout << "\n\t\t Name Of The Prodct  = ";
						cin  >> n;

						cout << "\n\t\t Price = ";
						cin  >> p;

						cout << "\n\t\t Discount = ";
						cin  >> d;

						data1 << "  " << c << "  " << n << "  " << p << "  " << d << "\n";
						cout << "\n\n\t\t Record Edited ";
						token++;
					}
					else
					{
						data1 << "  " << product_code << "  " << product_name << "  " << price << "  " << discount <<endl;
					}
					data >> product_code >> product_name >> price >> discount;
				}
				data.close();
				data1.close();

				remove("database.txt");
				rename("database1.txt","database.txt");

				if(token==0)
				{
					cout << "\n\n Record not Found Sorry!!";
				}
			}

		}

		void remove();
		void list();
		void receipt();
};

int main()
{
	return 0;
}