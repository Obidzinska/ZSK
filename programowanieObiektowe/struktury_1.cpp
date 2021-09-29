#include <iostream>
using namespace std;
struct Date{
    unsigned short int dd, mm, yyyy;
};
class Worker{
public:
    unsigned int id{};
    string name{}, surname{};
    Date dateBirthday{};

    void showAllData();
    void setData(unsigned int id);
    void setData(string surname);
    void setData(string name);


};
void Worker::showAllData(){
    cout<<"Dane pracownika\nIdentyfikator pracownika:"<<id
        <<"\nImiê i nazwisko: "<<name<<" "<<surname
        <<"\nData urodznia: "<<dateBirthday.dd<<"-"<<dateBirthday.mm<<"-"<<dateBirthday.yyyy<<endl;
};
void Worker::setData(unsigned int id){
    Worker::id=id;
};
void Worker::setData(string name){
    Worker::name=name;
};
void Worker::setData(string surname){
    Worker::surname=surname;
};

int main(int argc,char** argv){
setlocale(LC_CTYPE, "polish");
Worker kowalski;
kowalski.showAllData();


return 0;

}
