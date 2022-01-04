#include <iostream>
using namespace std;
int main(){
	int a=0;
	int d=0, u=0;
	while  ( a<10 ){
		cout<<"Podaj liczbê:"<<endl;;
		int x;
		cin>>x;
		
		if(x>0){
			d++;
		}
		else if (x<0){
			u++;
		}
		a++;
	}
	cout<<"Podano : "<<endl<<d<<" liczb dodatnich"<<endl<<u<<" liczb ujemynych"<<endl;
	
	
	
	return 0;
	}
	
