#include <iostream>

using namespace std;

class Worker{
    public:
// deklaracja zmiennych cz�onkowskich (w�a�ciwo�ci)
    string name="Janusz";
    string surname;
//definicja fukncji cz�onkowskiej (metoda)
void showData(){
cout<<"Imi�";}
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
