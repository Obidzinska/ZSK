#include <iostream>
using namespace std;
struct Data {
		int dd, mm, yyyy;
};
class Worker{
		

	public:
		int id{8};
		string name{"Maja"}, surname {"Obi"};
		Data dateBirthday {12 ,10 , 2021};
		
};
main(){
	Worker one;
	cout<<"Imiê; "<<one.name<<"\nNazwisko: "<<one.surname<<"\nData urodzenia: "<<one.dateBirthday.dd<<"."<<one.dateBirthday.mm<<"."<<one.dateBirthday.yyyy<<endl;
	
	
	
	
	
	return 0;
}
