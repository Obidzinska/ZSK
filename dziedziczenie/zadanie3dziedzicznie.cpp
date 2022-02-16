#include <iostream>
using namespace std;
class schoolWorker{
	public:
	string name, surname;
	
	schoolWorker(string pName, string pSurname){
		name = pName;
		surname = pSurname;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname;
	}
};
class Director: public schoolWorker{
	
	public:
		string position;
	Director(string pName, string pSurname, string pPosition) :schoolWorker( pName,  pSurname){
		name = pName;
		surname = pSurname;
		position =pPosition;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname + "\nPozycja: "+ position;
	}
};

class Teacher: public schoolWorker{
	public:
	string subject;
	Teacher(string pName, string pSurname, string pSubject): schoolWorker( pName,  pSurname){
		name = pName;
		surname = pSurname;
		subject = pSubject;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname+ "\nPrzedmiot: "+ subject;
	}
};
class Tutor: public Teacher{
	public:
	string classa;
	Tutor(string pName, string pSurname, string pSubject, string pClassa):	Teacher( pName,  pSurname,  pSubject) {
		name = pName;
		surname = pSurname;
		classa =pClassa;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname+ "\nPrzedmiot: "+ subject + "\nKlasa: "+ classa;
	}
	
};
int main(){
	setlocale(LC_CTYPE, "polish");
	Tutor wychowawca1("Zuzanna", "Nowak", "Matematyka", "2E");
	cout<<"Dane wychowawcy: "<<wychowawca1.showData();
	
	
	
	
	
	return 0;
}
