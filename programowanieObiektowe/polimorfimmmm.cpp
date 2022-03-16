#include <iostream>
using namespace std;
class c1{
	int a, b, c;
	virtual void f(){
	cout<< "Funkcja"<< endl;
	}
};
class c2{
	int a, b, c;
	void f(){
	cout<< "Funkcj2"<< endl;
	}

};
class c3{
	int a, b, c;
	void f(){
	cout<< "Funkcj2"<< endl;
	}
	void f2(){
	cout<< "Funkcj2"<< endl;
	}
	void f3(){
	cout<< "Funkcj2"<< endl;
	}

};
// sizeof- funkcja pomagaj¹ca sprawdziæ ile miejsca w pamiêci zajmuje dany element
int main(){
	setlocale(LC_CTYPE, "polish");
	//polimorfizm cz. cholera wie która
	c1*wsk1=new c1;
	cout<<sizeof(wsk1);
	c2*wsk2=new c2;
	cout<<sizeof(wsk2);
	c3*wsk3=new c3;
	cout<<sizeof(wsk3);
	cout<<"\nType int zajmuje: "<<sizeof(int)<<" bajty"<<endl;
	cout<<"\nType char zajmuje: "<<sizeof(char)<<" bajt"<<endl;
	cout<<"\nType string zajmuje: "<<sizeof(string)<<" bajty"<<endl;
	cout<<"\nType float zajmuje: "<<sizeof(float)<<" bajty"<<endl;
	cout<<"\nType double zajmuje: "<<sizeof(double)<<" bajty"<<endl;
	cout<<"\nType boole zajmuje: "<<sizeof(bool)<<" bajt"<<endl;
	
	return 0;
}
