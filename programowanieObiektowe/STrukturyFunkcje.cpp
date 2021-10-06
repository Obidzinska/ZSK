#include <iostream>

using namespace std;
class School{
public:
    static string s_school;
    static string s_jobPosition;

    string name;
    string surname;

    void getData();
    void setNameSurname(string name, string surname)

};
string School::s_string="ZSK";
string School::s_jobPosition="Uczeñ";
 void School::getData(){
 cout<<"Imiê i nazwisko:"<<name<<" "<<surname<<endl;
 }
 void School::setNameSurname(string name, string pSurname){
 School::name=name;
 surname=pSurname;
 }
int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");
    cout<<School::s_school;
    cout<<School::s_jobPosition;
    
    
    return 0;
}

