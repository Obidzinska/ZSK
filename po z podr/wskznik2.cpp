#include <iostream>
using namespace std;
class Worker{
	public:
		string name;
		int liczNog;
		void showData(){
			cout<<"Name: "<<name<<"\nLegs: "<<liczNog<<endl<<endl;
		}
};
int main(){
	Worker one;
	one.name="Kaja";
	one.liczNog=2;
	one.showData();
	
	Worker *coolPerson;
	coolPerson=&one;
	coolPerson->name="Aleksandra";
	coolPerson->showData();
	
	
	
	
	
	
	
	return 0;
}
