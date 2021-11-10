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
		cout<<"konstruktor domyœlny"<<endl;
		
	}

	Worker::Worker(string pName, string pSurname):
		name {pName},
		surname {pSurname}
		{
			cout<<"konstruktor parametryczny"<<endl;
		}
	
	void Worker::getData(){
		cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
		
	}
	
	
	
	int main(){
		setlocale(LC_CTYPE, "Polish");
		
		Worker nowak = Worker{"Janusz","Nowak"};
		nowak.getData();
		
	
		
	
			
		return 0;
	}

