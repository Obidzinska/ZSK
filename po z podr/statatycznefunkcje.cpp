#include <iostream>
using namespace std;
class Car{
	float price;
	string registration;
	public:
		static int liczbaKol;
		string brand;
		string model;
		string color;
		int year;
		void showData(){
			cout<<"Marka: "<<brand<<"\nModel: "<<model<<"\nKolor: "<<color<<"\nRok produkcji: "<<year<<"\nCena: "<<getPrice()<<"\nLiczbe kó³: "<<getLiczbaKol()<<"\nRejestracja"<<getRegistration()<<endl<<endl;
		}
		static int getLiczbaKol();
		static void setLiczbaKol(int);
		float getPrice();
		void setPrice(float);
		string getRegistration();
		void setRegistration(string);
		~Car(){
			cout<<"Destruktor zosta³ wywo³any"<<endl;
		}
		
};
int Car::liczbaKol=4;
float Car::getPrice(){
	return price;
}
void Car::setPrice(float pPrice){
	price=pPrice;
}
void Car::setRegistration(string pRegistration){
	registration =pRegistration;
}
string Car::getRegistration(){
	return registration;
}
int main(){
	setlocale(LC_CTYPE, "polish");
	Car one;
	one.brand="Mercedes";
	one.model="G500";
	one.color="Czarny";
	one.setLiczbaKol(4);
	one.year=1990;
	one.setRegistration("PZ733HL");
	one.setPrice(1200.0);
	one.showData();
}












