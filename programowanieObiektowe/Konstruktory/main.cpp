#include <iostream>

using namespace std;
struct Data{
    int dd, mm, yyyy;
};
class Car{
    public:
    int id;
    string brand, model, color;
    unsigned short int power;
    float price;
    Data dateOfProduction;
    void getData();

    Car(){
    color="bia³y";
    id=1555;
    brand="mercedes";
    model="G klasa";
    power=1456;
    price=1555;
    dateOfProduction.yyyy=2017;
    }
};
void Car::getData(){
  cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nData produkcji: "<<dateOfProduction.yyyy<<"\nKolor: "<<color<<"\nPrice: "<<price<<endl;
}
int main(int argc, char** argv)
{
    setlocale(LC_CTYPE,"polish");
    Car mercedes;
    mercedes.getData();
    return 0;
}
