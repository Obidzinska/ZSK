#include <iostream>

using namespace std;

class Worker{
    public:
// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
    string name="Janusz";
    string surname;
//definicja fukncji cz³onkowskiej (metoda)
void showData(){
cout<<"Imiê";}
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
