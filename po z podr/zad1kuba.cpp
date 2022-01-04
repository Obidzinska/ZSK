#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
	srand( time( NULL ) );
    
	
   
    int a = rand()% (20-7+1 )+7;
     int b = rand()% (20-7+1 )+7;
      int c = rand()% (20-7+1 )+7;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    (a+b)>c&&(a+c)>b&&(b+c)>a?cout<<"Mozna zbudowac trojkat":cout<<"Nie mozna zbudowac trojkata";
    return 0;
}
