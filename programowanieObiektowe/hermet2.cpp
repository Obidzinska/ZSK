#include <iostream>
using namespace std;
class Worker{
private:
    string name, surname, pesel;
public:
    short int height;
    Worker(string, string, string, short int);
    void setName(string pName);
    string getName();
    void setAll(string pName, string pSurname, short int height);
    void getData();
};
 Worker::Worker(string pName, string pSurname, string pPesel, short int pHeight){
     name = pName;
     surname = pSurname;
     pesel = pPesel;
     height = pHeight;
 }
 void Worker::setName(string pName){
 name = pName;
 }

 string Worker::getName(){
 return name;
 }
 void Worker::getData(){
 cout<<"Imię: "<<name<<"\nNazwisko"<<surname<<"\nPesel: "<<pesel<<"\nWzrost"<<height<<endl;
 }
main(){
setlocale(LC_CTYPE, "polish");
Worker nowak("Janusz", "Nowak", "2453690", 180);
Worker*wsk= &nowak;
wsk -> setName("Krycha");
cout<<"Imię: "<<wsk->getName()<<endl;
nowak.getData();








return 0;
}
