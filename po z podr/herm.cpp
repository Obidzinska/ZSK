#include <iostream>
using namespace std;
class bank{
	float price;
	public:
	string numberAccount;
	void showData(){
		cout<<"Numer Konta: "<<numberAccount<<"\nPieni¹dze na koncie: "<<price<<endl;
	}
	void setPrice(float pPrice){
		price=pPrice;
	}
	int getPrice(){
		return price;
	}
};
int main(){
	setlocale(LC_CTYPE, "polish");
	bank one;
	one.numberAccount="1234567";
	one.setPrice(123.56);
	one.showData();
	bank*superbank;
	superbank=&one;
	superbank->numberAccount="9876";
	superbank->showData();
}

