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
main(){
setlocale(LC_CTYPE, "polish");
Worker nowak("Janusz", "Nowak", "2453690", 180);
Worker*wsk= &nowak;
wsk -> setName("Krycha");
cout<<"Imiê: "<<wsk->getName()<<endl;








return 0;
}
