#include <iostream>
using namespace std;

class Worker{
	static int s_wiek;
	public:
		string name= "Maja";
		string surname ="Obidzinska";
	static int s_zwrocWiek();
	static void s_ustawWiek(int pWiek){
		s_wiek=pWiek;
	}
	void showData(){
		cout<<"Imiê: "<<name<<"\nNazwisko: "<<surname<<"\nWiek: "<<s_wiek<<endl<<endl;
	}
	
};
int Worker::s_wiek=15;
int Worker::s_zwrocWiek(){
	return s_wiek;
}
int main(){
	setlocale(LC_CTYPE, "polish");
	Worker first;
	first.showData();
	Worker second;
	Worker::s_ustawWiek(16);
	second.name="Adam";
	second.surname="Baczyñski";
	second.showData();
}
