#include <iostream>
using namespace std;

class Worker{
		public:
			string name , surname;
			Worker();
			Worker(string pName, string pSurname);
			
			~Worker(){
				cout<<"destruktor"<<endl;
			}
			
			void getData();
			
};

	Worker::Worker(){
		cout<<"konstruktor domy�lny"<<endl;
		
	}

	Worker::Worker(string pName, string pSurname):
		name {pName},
		surname {pSurname}
		{
			cout<<"konstruktor parametryczny"<<endl;
		}
	
	void Worker::getData(){
		cout<<"Imi� i nazwisko: "<<name<<" "<<surname<<endl;
		
	}
	
	void crateObjectWorker(){
		Worker szkiely{"Psy","Szkie�y"};
		cout<<"Wywo�ano funkcje createObjectWorker"<<endl;
		szkiely.getData();
	}
	
	int main(){
		setlocale(LC_CTYPE, "Polish");
		
		//Worker nowak = Worker{"Janusz","Nowak"};
		//nowak.getData();
		
		//Worker *p_kowalski = new Worker{"Krzychu","Kowalski"};
		//p_kowalski->getData();
		//delete p_kowalski;
		
		crateObjectWorker();
		Worker kowalski;	
		return 0;
	}

