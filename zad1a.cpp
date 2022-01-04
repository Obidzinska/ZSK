#include <iostream>

using namespace std;
int main(){
	//a
	for(int x=-4; x<=14; x=x+3){
	
		cout<<x<<" ";
	}
	//b
	cout<<endl;
	for(int i=-4; i<=14; i=i+3){
		if(i==2||i==8) continue;
		cout<<i<<" ";
	}
	cout<<endl;
	//c
		for(int z=12; z>=-12; z=z-4){
	
		cout<<z<<" ";
	}
	cout<<endl;
		for(int a=12; a>=-12; a=a-4){
		if(a==0) continue;
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}

