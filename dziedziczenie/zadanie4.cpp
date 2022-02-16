#include <iostream>
using namespace std;
class schoolWorker{
	private:
	string name{""};
	string surname{""};
	public:
	void setName(string pName){
		name = pName;
	}
	void setSurname(string pSurname){
		surname = pSurname;
	}
	string getName(){
		return name;
	}
	string getSurname(){
		return surname;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname;
	}
	
};
class Director: public schoolWorker{
	private:
	string position;
	public:
		void setPosition(string pPosition){
		position = pPosition;
	}
	string getPostion(){
		return position;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname + "\nPozycja: "+ position;
	}
};

class Teacher: public schoolWorker{
	string subject;
	public:
		void setSubject(string pSubject){
		subject = pSubject;
	}
	string getSubject{
		return subject;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname+ "\nPrzedmiot: "+ subject;
	}
};
class Tutor: public Teacher{
		string classa;
	public:
			void setClassa(string pClassa){
		classa  = pClassa;
	}
	string getClassa{
		return classa;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname+ "\nPrzedmiot: "+ subject + "\nKlasa: "+ classa;
	}
	
};
class Secretary: public schoolWorker{
		string type;
	public:
			void setType(string pType){
		type  = pType;
	}
	string getType{
		return type;
	}
	string showData(){
		return "\nImiê: "+ name + "\nNazwisko: " +surname + "\nTyp sektretariatu: "+ type;
	}
};
int main(){
	setlocale(LC_CTYPE, "polish");
	Tutor wychowawca1;
	wychowawca1.setName("Zuzanna");
	wychowawca1.setSurname("Nowak");
	wychowawca1.setSubject("Matematyka");
	wychowawca1.setClassa("2E");
	cout<<"Dane wychowawcy: "<<wychowawca1.showData();

	return 0;
}
