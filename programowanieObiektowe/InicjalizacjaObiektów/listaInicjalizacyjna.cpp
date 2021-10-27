#include <iostream>

using namespace std;
class Worker{
int id {8};
public:

    string name {"Katarzyna"};
    string surname {"Nowak"};
    Worker();
    Worker(int pId = 1, string pName="Name", string pSurname);
    void getData();
};
Worker::Worker():
id {13},
name {"Domyœlne imie"},
surname {"domyœlne nazwisko"}
{
    cout<<"Konstruktor domyślny"<<endl;
}

Worker::Worker(int pId, string pName, string pSurname):
    id  {pId},
    name {pName},
    surname {pSurname}
    {
    cout<<"Konstruktor parametryczny"<<endl;
    }
void Worker::getData(){
cout<<"Id: "<<id<<"\nImiê: "<<name<<"\nNazwisko: "<<surname<<endl;
}
int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");
   Worker nowak = Worker(1, "jan", "Nowak");
   nowak.getData();
   Worker nowak1 = Worker();
   nowak1.getData();



    return 0;
}
