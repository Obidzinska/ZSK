#include <iostream>
using namespace std;

	class Car {
		public: 
		string brand, model, color;
		int year;
		float price;
		void showData();
		Car();
		Car(string pBrand, string pModel, string pColor, int pYear, float pPrice);
		Car(string pBrand, string pModel, int pYear);
		~Car(){
			cout << "Destruktor i chuj" << endl;
		};
		
	};
	
Car::Car(){
	cout << "Konstruktor domyœlny" << endl;
}

Car::Car(string pBrand, string pModel, string pColor, int pYear, float pPrice){
	brand = pBrand;
	model = pModel;
	color = pColor;
	year = pYear;
	price = pPrice;
}

Car::Car(string pBrand, string pModel, int pYear){
	brand = pBrand;
	model = pModel;
	year = pYear;
}

void Car::showData(){
	cout << "brand: " << brand << "\nmodel: " << model << "\ncolor: " << color << "\nyear: " << year << "\nprice: " << price << endl;
}

void createObject(){
	Car samochod;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	Car fiat = Car("fiat","multipla","szary",2000,100000);
	fiat.showData();
	
	Car* Auto = &fiat;
	Auto -> price = 2000;
	Auto -> showData();
	
	return 0;
}
