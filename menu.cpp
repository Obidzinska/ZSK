#include <iostream>
#include "windows.h"
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    setlocale(LC_CTYPE, "polish");
    int change, i=5, a,totol=0, b,x ,y;
    bool licz=true;
    string color;
    int T[i];
    int S[i];
    while(true){
        cout<<"Menu\n0 -wyjscie \n1 - totolotek \n2 - ulubiony kolor\n";
        cin>> change;
        switch(change){
            case 0:
            return 0;
            break;

            case 1:
            cout<<"Totolotek"<<endl;
             cout<<"Podaj 6 liczb: ";
             for(int z=0; z<6; z++){
                cout<<"\nPodaj "<<z+1<<" liczbe: ";
                cin>>S[z];
            }

             srand(time(NULL));
            for(x=0; x<6; x++){
                T[x]=(rand() %(50-1))+1;
               cout<<T[x]<<endl;
            }

            for(y =0; y<=6; y++){
                for(a=0; a<6; a++){
                    if(T[y]==S[a]){
                        totol++;
                    }
                }
            }
            cout<<"Trafiles: "<<totol<<endl;
            totol=0;
            break;

            case 2:
                cout<<"Podaj twoj ulubiony kolor: ";
                cin>>color;
                cout<<"\nTwoj ulubiony kolor to "<<color<<endl;
                break;


            default:
            cout<<"error";

        }
            }
            return 0;
}
