#include <iostream>

using namespace std;

class Worker{
    public:
// deklaracja zmiennych członkowskich (właściwości)
    string name="Janusz";
    string surname;
//definicja fukncji członkowskiej (metoda)
void showData(){
cout<<"Imię";}
};
int main()
{
    setlocale(LC_CTYPE,"polish");
    //typ + nazwa
    Worker pracownik;
    cout << pracownik.name;
    pracownik.showData();
    return 0;
}
