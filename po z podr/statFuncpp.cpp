#include <iostream>
using namespace std;
class Worker{
	
		static string s_school;
		public:
		
		string name;
		string surname;
		static string s_zwrocSzkola();
		static void s_ustawSzkola(string pSchool){
			s_school=pSchool;
		};
		void showData(){
			cout<<"Imi�: "<<name<<"\nNazwisko: "<<surname<<"\nSzko�a: "<<s_school<<endl<<endl;
		};
};
string Worker::s_school ="Technikum komunikacji";
string Worker::s_zwrocSzkola(){
	return s_school;
}


int main(){
	setlocale(LC_CTYPE,"polish");
	Worker one;
	one.name="Janusz";
	one.surname="Nowak";
	cout<<"Dane pracownika:"<<"\nImi�: "<<one.name<<"\nSurname: "<<one.surname<<"\nSchool: "<<Worker::s_zwrocSzkola()<<endl<<endl;
	
	
	Worker two;
	two.name="Iza";
	two.surname="Kami�ska";
	Worker::s_ustawSzkola("Technikum ��cznos�i");
	cout<<"Dane pracownika:"<<"\nImi�: "<<two.name<<"\nSurname: "<<two.surname<<"\nSchool: "<<Worker::s_zwrocSzkola()<<endl<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
