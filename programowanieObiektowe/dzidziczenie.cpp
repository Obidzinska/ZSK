#include <iostream>
using namespace std;
class bird{
public:
    int numberOfLegs =2;
private:
    string color="brown";
protected:
    int numberOfEyes=2;
};
class Kiwi
: public bird{
    void showData()
    { cout<<"Number of legs"<<numberOfLegs<<"\nColor"<<color<<"\nNumber of eyes"<<numberOfEyes;
};
int main (){
setlocale(LC_CTYPE, "polish");
Kiwi one;
one.showData();






return 0;
};
