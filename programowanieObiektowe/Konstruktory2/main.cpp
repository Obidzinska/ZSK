#include <iostream>

using namespace std;
class Worker{
public:
    int id {8};
    string name {"Katarzyna"};
    string surname {"Nowak"};

    Worker(int pId = 1, string pName="Name", string pSurname="Srname");
    void getData();
};
Worker::Worker(int pId, string pName, string pSurname){
id=pId;
name=pName;
surname=pSurname;
};
void Worker::getData(){
cout<<"Id: "<<id<<"\nImiê: "<<name<<"\nNazwisko: "<<surname<<endl;
}
int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");
    Worker nowak1=Worker();
    Worker nowak=Worker(10, "Katarzyna", "Nowak");
    nowak.getData();

    return 0;
}
