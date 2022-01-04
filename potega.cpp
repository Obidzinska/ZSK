#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE,"polish");
	int x,y;
	int wynik=1;
	cout<<"Podaj liczbe: "<<endl;
	cin>>x;
	cout<<"Do jakiej potêgi chcesz to podnieœæ: "<<endl;
	cin>>y;
	int i=0;
	while(i<y){
		wynik=(wynik)*x;
		i++;
	}
	cout<<"Wynik wynosi: "<<wynik<<endl;
	
	return 0;
}
	
	
	
	
