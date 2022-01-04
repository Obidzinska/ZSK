#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand( time( NULL ) );
    
	int a=(( std::rand() % 875 ) -234 );
	cout<<"Wylosowana liczba to: "<<a<<endl;;
	int x=a%7;
	(x=0) ? cout<<"Jest podzielna przez 7": cout<<"Nie jest podzielna przez 7";
    
    
    
    
    return 0;
}
