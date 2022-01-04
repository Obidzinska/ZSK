#include <iostream>
using namespace std;
class Student{
	public:
		static string s_klasa;
		static string s_zawod;
		
		string name;
		string surname;
		void showData();
};
string Student::s_klasa="2a";
string Student::s_zawod="Technik Informatyk";

void Student::showData(){
	cout<<"Dane ucznia :"<<"\nImiê: "<<name<<"\nSurname: "<<surname<<"\nClass: "<<s_klasa<<"\nZawód: "<<s_zawod<<endl<<endl;
}
int main(){
	setlocale(LC_CTYPE,"polish");
	Student one;
	one.name="Janusz";
	one.surname="Nowak";
	one.showData();
	
	Student::s_klasa="2e";
	Student::s_zawod="Technik Programista";
	Student two;
	two.name="Maja";
	two.surname="Obidzinska";
	two.showData();
	
	
	
	
	
	
	
	
	
	return 0;
}
