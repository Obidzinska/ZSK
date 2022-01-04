#include <iostream>
using namespace std;
class Worker{
	public:
		string name;
		string surname;
		void showData(){
			cout<<"Imiê: "<<name<<"\nNazwisko: "<<surname<<endl<<endl;
		}
};

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker one;
	Worker*w_worker;
	w_worker=&one;
	w_worker->name="Jan";
	w_worker->surname ="Kowalski";
	w_worker->showData();
	
	
	
	
	
	
	return 0;
}
