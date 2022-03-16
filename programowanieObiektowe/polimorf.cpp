#include <iostream>
using namespace std;
class Animal{
	public:
	float weight, age;
	void look(){
		cout<<"Zwierzê patrzy"<<endl;
	}
	virtual void breatche(){
		cout<<"Zwierzê oddycha"<<endl;
	}
};
class Fish: public Animal{
	public:
	virtual void breatche(){
		cout<<"Ryba oddycha skrzelami"<<endl;
	}
	void swim(){
		cout<<"P³yñ!"<<endl;
	}
	
};
class Namal: public Animal{
	public:
	virtual void breatche(){
		cout<<"Ssak oddycha p³ucami"<<endl;
	}
	void run(){
		cout<<"Biegnij!"<<endl;
	}
	
};
class Bird: public Animal{
	public:
	virtual void breatche(){
		cout<<"Ptak oddycha p³ucami"<<endl;
	}
	void fly(){
		cout<<"Leæ!"<<endl;
	}
	
};
int main(){
	setlocale(LC_CTYPE, "polish");
	//polimorfizm cz. cholera wie która
	Fish karp;
	Animal*wsk=&karp;
	wsk ->breatche();
	
	Bird gawron;
	wsk =&gawron;
	return 0;
}
