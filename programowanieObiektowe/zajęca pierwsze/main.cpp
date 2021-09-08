
#include <iostream>

using namespace std;

class Worker{
    public:
// deklaracja zmiennych członkowskich (właściwości)
    string name="Janusz";
    string surname;
    signed short int age;
//definicja fukncji członkowskiej (metoda)
void showData(){
cout<<"Imię";}
void showName(){

//wyświetlić imię pobrane z obiektu

}
};
int main()
{
    setlocale(LC_CTYPE,"polish");
    //typ + nazwa
    Worker pracownik;
    cout << pracownik.name;
    pracownik.showData();

    pracownik.surname = "Kowalski";
    pracownik.age = 15;
    cout << "Imię i nazwisko: "<< pracownik.name << " " << pracownik.surname<<endl;
    cout << "Wiek:" << pracownik.age;
    cout << "Imię:"  
    return 0;
}
