#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
    srand(time(NULL));
    double a , b ,x;
    a=-15.2+(double)rand()/RAND_MAX*41.8;
    b=-15.2+(double)rand()/RAND_MAX*41.8;
    x=-15.2+(double)rand()/RAND_MAX*41.8;
    if(a>0)
    {
        if(x<=-b/2*a){
		cout<<"Funkcja maleje dla:"<<x<<endl;
		}
       
        else if(x>=-b/2*a){
        	cout<<"Funkcja rosnie dla:"<<x<<endl;
		}
        
    }
    else if (a<0)
    {
        if(x<=-b/2*a){
		cout<<"Funkcja rosnie dla:"<<x<<endl;
		}
		
        else if(x>=-b/2*a){
        	cout<<"Funkcja maleje dla:"<<x<<endl;
		}
        
    }
    return 0;
}

