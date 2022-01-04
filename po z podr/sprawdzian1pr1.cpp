#include <iostream>
using namespace std;
class Car{
	private:
		static float price;
	public:
	 static string returnPrice();
	 static void getPrice(float Pprice){
		price=Pprice;
	}
	 
};
string Car::returnPrice(){
	return price;
}
float Car::price{123.45};	
main(){
	Car one;
	cout<<"Cena: "<<Car::returnPrice<<endl;
	return 0;
}
