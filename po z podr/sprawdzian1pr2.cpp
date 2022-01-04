#include <iostream>
using namespace std;
class Car{
	float price;
	string registration;
	public:
		string brand, model, color;
		int year;
		static int numberOfWheels;
		
		void setPrice(float);
		float getPrice();
		void setRegistration(string);
		string getRegistration();
		static void setNumberOfWheels(int);
 		static int getNumberOfWheels();
		void showData();
		~Car();
		Car(string, string, string, int, float, string);
		Car(string, string, int);
		Car();
};
Car::Car(){
	cout<<"Konstruktor domyœlny zosta³ wywo³any"<<endl;
}
Car::Car(string pBrand, string pModel, int pYear){
	brand=pBrand;
	model=pModel;
	year=pYear;
}
Car::Car(string pBrand, string pModel, string pColor, int pYear , float pPrice, string pRegistration){
	brand=pBrand;
	model=pModel;
	color=pColor;
	year=pYear;
	price=pPrice;
	registration=pRegistration;
}
Car::~Car(){
	cout<<"Destruktor zosta³ wyso³any"<<endl;
}
void Car::setPrice(float pPrice){
	price=pPrice;
}
void Car::setRegistration(string pRegistration){
	registration=pRegistration;
}
void Car::setNumberOfWheels(int pNumberOfWheels){
	numberOfWheels=pNumberOfWheels;
}
float Car::getPrice(){
	return price;
}
string Car::getRegistration(){
	return registration;
}
 int Car::getNumberOfWheels(){
return numberOfWheels;
}
void Car::showData(){
	cout<<"Marka: "<<brand;
	cout<<"\nModel: "<<model;
	cout<<"\nColor: "<<color;
	cout<<"\nYear: "<<year;
	cout<<"\nPrice: "<<getPrice();
	cout<<"\nRegistration: "<<getRegistration()<<endl<<endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
Car fiat("Fiat", "Multipla", "Szary",2000,2000.99, "PZ5678");
fiat.showData();	
Car*superauto;
superauto=&fiat;
superauto->setPrice(2000);
superauto->showData();

/*PRZECI¥¯ENIE KONSTRUKTORA =wiele konstruktorów o tej samej nazwie np. w klasie ró¿ni¹ siê od siebie iloœci¹ parametrów 
np.Car(string pBrand), Car(string pBrand, string pModel), Car(string pBrand, string pModel, string pColor);*/

	
return 0;	
}

