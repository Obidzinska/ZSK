#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    
    setlocale(LC_CTYPE, "polish");
cout<<"podaj liczbê: ";
double x;
cin>>x;
double wynik;
if(x<-4){
	wynik=abs(x+3);
}
else if(x==-4){
	int b = 4;
	wynik = pow(x,b);
	
}
else{
	wynik =9;
}
cout<<wynik<<setprecision(2)<<endl;    
    
    
    
    return 0;
}
