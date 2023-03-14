#include<iostream>
using namespace std;

class Festival
{
	int date,month,year=2023;
	
	public :
		
		Festival()
		{
			cout<<"Enter Date :";
			cin>>this->date;
			cout<<"Enter Month :";
			cin>>this->month;
			cout<<endl<<"Date Is :"<<this->date<<"/"<<this->month<<"/"<<this->year<<endl;

            if(this->month==1)
			{
				if(this->date==1)
				{
					cout<<"New Year.";
				}
				else if(this->date==12)
				{
					cout<<"Swami Vivekanad Jayanti.";
				}
				else if(this->date==14)
				{
					cout<<"Lohri.";
				}
				else if(this->date==15)
				{
					cout<<"Pongal\nUtarayan\nMakkar sankranti\nMagh Bihu.";
				}
				else if(this->date==23)
				{
					cout<<"Subhash Chandra Bose Jayanti.";
				}
				else if(this->date==26)
				{
					cout<<"Republic Day\nVasant Panchami.";
				}
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==2)
			{
			    if(this->date==5)
				{
					cout<<"Guru Ravidas Jayanti.";
				}
				else if(this->date==14)
				{
					cout<<"Janki Jayanti\n Velentine Day";
				}
				else if(this->date==18)
				{
					cout<<"Maha shivratri";
				}
				else if(this->date==21)
				{
					cout<<"Phulera Dooj.";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==3)
			{
				if(this->date==7)
				{
					cout<<"Holika Dahan";
				}
				else if(this->date==8)
				{
					cout<<"Dhuleti";
				}
				else if(this->date==12)
				{
					cout<<"Rangnag Panchami";
				}
				else if(this->date==22)
				{
					cout<<"Chaitra Navratri\nGuddi Padavo";
				}
				else if(this->date==24)
				{
					cout<<"Gauri Puja.";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==4)
			{
				if(this->date==1)
				{
					cout<<"Banks Holiday";
				}
				else if(this->date==6)
				{
					cout<<"Hanuman Jayanti";
				}
				else if(this->date==14)
				{
					cout<<"Ambedakar Jaynti";
				}
				else if(this->date==22)
				{
					cout<<"EID";
				}
				else if(this->date==29)
				{
					cout<<"SitaNavami.";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==5)
			{
				if(this->date==5)
				{
					cout<<"Buddh Purnima";
				}
				else if(this->date==23)
				{
					cout<<"Yash's Birthday.";
				}
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==6)
			{
				if(this->date==20)
				{
					cout<<"Jagannath RathYAtra";
				}
				else if(this->date==29)
				{
					cout<<"Devshyani Ekadashi";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==7)
			{
				if(this->date==3)
				{
					cout<<"GuruPurnima";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==8)
			{
				if(this->date==15)
				{
					cout<<"Independanceday";
				}
				else if(this->date==19)
				{
					cout<<"Hariyali Teej";
				}
				else if(this->date==21)
				{
					cout<<"Nag Panchami";
				}
				else if(this->date==29)
				{
					cout<<"Onam";
				}
				else if(this->date==30)
				{
					cout<<"RakshaBandhan.";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==9)
			{
				if(this->date==2)
				{
					cout<<"Kajari Teej";
				}
				else if(this->date==5)
				{
					cout<<"Techer's Day'";
				}
				else if(this->date==7)
				{
					cout<<"Janmashtmi.";
				}
				else if(this->date==18)
				{
					cout<<"Hartalika Teej";
				}
				else if(this->date==19)
				{
					cout<<"Ganesh Chaturthi.";
				}
				else if(this->date==28)
				{
					cout<<"Anant Chaturdashi.";
				}
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==10)
			{
				if(this->date==2)
				{
					cout<<"Gandhi Jayanti";
				}
				else if(this->date==15)
				{
					cout<<"Navaratri";
				}
				else if(this->date==22)
				{
					cout<<"DurgaAstami";
				}
				else if(this->date==23)
				{
					cout<<"Durga Maha Navami Puja.";
				}
				else if(this->date==24)
				{
					cout<<"Dussera.";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==11)
			{
				if(this->date==1)
				{
					cout<<"KaravaChauth";
				}
				else if(this->date==5)
				{
					cout<<"Ahoi Astami";
				}
				else if(this->date==10)
				{
					cout<<"Dhanteras.";
				}
				else if(this->date==12)
				{
					cout<<"Diwali";
				}
				else if(this->date==14)
				{
					cout<<"BhaiBij.";
				}
				
				else if(this->date==19)
				{
					cout<<"Chhath Puja.";
				}
				else if(this->date==23)
				{
					cout<<"Devuthanna Ekadashi.";
				}
				else if(this->date==24)
				{
					cout<<"Tulasi Vivah.";
				}
				else if(this->date==26)
				{
					cout<<"Dev Diwali.";
				}
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
			else if(this->month==12)
			{
				if(this->date==17)
				{
					cout<<"Vivah Panchami";
				}
				else if(this->date==25)
				{
					cout<<"Christmas ";
				}
				
				else
				{
					cout<<"Not Any Ferstival On this Date..";
				}
			}
		}
};

int main()
{
	Festival f;
	
	return 0;
}