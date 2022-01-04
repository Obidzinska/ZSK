#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "polish");
    cout<<"Podaj wspó³rzêdne punktu: "<<endl;
    double x, y;
    cout<<"Podaj x :"; cin>>x;
    cout<<"Podaj y :"; cin>>y;
    if(x>0 && y>0){
    	cout<<"Punkt le¿y w æwiartce pierwszej."<<endl;
    	
	}
	else if(x>0 && y<0){
		cout<<"Punkt le¿y w æwiartce czwartej."<<endl;
	}
	else if(x<0 && y>0){
		cout<<"Punkt le¿y w æwiartce drugiej"<<endl;
	}
    else if(x<0 && y){
    	cout<<"Punkt le¿y w æwiartce trzeciej"<<endl;
	}
	else if (x==0 && y==0){
		cout<<"0"<<endl;
	}
	else if(x==0 && y!=0){
		cout<<"OX"<<endl;
	}
    else if (x!=0 && y==0){
    	cout<<"OY"<<endl;
	}
    return 0;
}
