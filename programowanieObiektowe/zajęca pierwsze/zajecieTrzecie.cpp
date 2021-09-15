#include <iostream>

using namespace std;

class Rectangle{
    public:
    float sideOne ;
    float sideTwo ;




void showArea();

void showCircuit();
};
void Rectangle:: showArea(){
cout << "Pole = " << sideOne * sideTwo;
}
void Rectangle:: showCircuit(){
    cout << "Obwód = " << sideOne * 2 + sideTwo * 2;
}

int main(){
    setlocale(LC_CTYPE,"polish");
    Rectangle prostokat;
    cout<<"Podaj pierwszy bok:"<<endl;
    cin >> prostokat.sideOne;
    cout<<"Podaj drugi bok:"<<endl;
    cin >> prostokat.sideTwo ;
    prostokat.showArea();
    cout << " ";
    prostokat.showCircuit();

return 0;
}

