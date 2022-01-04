#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand( time( NULL ) );
    
	double k=(( std::rand() % 132 ) -130 );
	cout<<"Wylosowana k to: "<<k<<endl;
	double b1=(( std::rand() % 123 ) -130 );
	cout<<"Wylosowana b1 to: "<<b1<<endl;
    double m=(( std::rand() % 132 ) -130 );
	cout<<"Wylosowana m to: "<<m<<endl;
    double b2=(( std::rand() % 132 ) -130 );
	cout<<"Wylosowana b2 to: "<<b2<<endl;
    
    return 0;
}
