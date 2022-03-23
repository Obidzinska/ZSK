#include <iostream>
#include "add.h.h"
#include <typeinfo>
#include <string>
#include "Test.h"
using namespace std;
int main(int argc, char** argv) {
	add(2, 5);
	Dog *wskDog = new Dog ();
	wskDog->className();
	wskDog->speak();
	
	Animal *wskaNIMAL = new Dog;
	wskaNIMAL->className();
	wskaNIMAL->speak();
	
	Animal zwierze;
	Dog *wsk;
	wsk->className();
	
	Dog pies;
	wsk = &pies;
	wsk ->className();
		return 0;
}
