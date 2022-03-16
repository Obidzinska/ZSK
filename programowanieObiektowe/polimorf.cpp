#include <iostream>
using namespace std;
class Animal{
	public:
	float weight, age;
	void look(){
		cout<<"Zwierz� patrzy"<<endl;
	}
	virtual void breatche(){
		cout<<"Zwierz� oddycha"<<endl;
	}
};
class Fish: public Animal{
	public:
	virtual void breatche(){
		cout<<"Ryba oddycha skrzelami"<<endl;
	}
	void swim(){
		cout<<"P�y�!"<<endl;
	}
	
};
class Namal: public Animal{
	public:
	virtual void breatche(){
		cout<<"Ssak oddycha p�ucami"<<endl;
	}
	void run(){
		cout<<"Biegnij!"<<endl;
	}
	
};
class Bird: public Animal{
	public:
	virtual void breatche(){
		cout<<"Ptak oddycha p�ucami"<<endl;
	}
	void fly(){
		cout<<"Le�!"<<endl;
	}
	
};
int main(){
	setlocale(LC_CTYPE, "polish");
	//polimorfizm cz. cholera wie kt�ra
	Fish karp;
	Animal*wsk=&karp;
	wsk ->breatche();
	
	Bird gawron;
	wsk =&gawron;
	return 0;
}
