#include <iostream>
using namespace std;
class Worker{
	public:
		static string s_school;
		static string s_stanowisko;
		
		string name;
		string surname;
		void showData();
};
string Worker::s_school="Technikum Komunikacji";
string Worker::s_stanowisko="Nauczyciel";

void Worker::showData(){
	cout<<"Dne pracownika:"<<"\nImiê: "<<name<<"\nSurname: "<<surname<<"\nSchool: "<<s_school<<"\nStanowisko: "<<s_stanowisko<<endl<<endl;
}
int main(){
	setlocale(LC_CTYPE,"polish");
	Worker one;
	one.name="Janusz";
	one.surname="Nowak";
	one.showData();
	
	Worker::s_stanowisko="portier";
	Worker two;
	two.name="Iza";
	two.surname="Kamiñska";
	two.showData();
	
	
	
	
	
	
	
	
	
	return 0;
}
