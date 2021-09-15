#include <iostream>

using namespace std;

class Worker{
    public:
// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
    string name;
    string surname;
    signed short int yearBirthday;
    string nationality;
    char gender;

void showName(){
cout<<"Imie: " << name;
};
//deklaracja (prototyp) metody
void showSurname();
string showPersonality();
void showAllData();
};
void Worker::showSurname(){
    cout <<"Nazwisko:" << surname << endl;

};
void Worker:: showPersonality(){
    cout<<"Peronality:" + name + " " + surname + \n;
};
void Worker:: showAllData(){
 cout << "Dane praownika:\n" << Worker :: showPersonality();
 }

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE,"polish");
    //typ + nazwa
    Worker pracownik;
    pracownik.name="Janusz";
    pracownik.surname="Nazwisko";
    pracownik.nationality="Polska"
    pracownik.showPersonality();
    pracownik.showAllData();
    return 0;
}
