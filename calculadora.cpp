#include <iostream>

using namespace std;

float suma(int a, int b);
float resta(int a, int b);
float producto(int a, int b);
float division(int a, int b);

int main(){

	int num=0, a=0, b=0;
	cout<<" Escoge una operacion ";
	cin>>num;


	switch(num){
		case 1: suma(a,b);
		break;
		case 2: resta(a,b);
		break;
		case 3: producto(a,b);
		break;
		case 4: division(a,b);
	}

	return 0;
}

// Creaci�n de la funci�n suma
float suma(int a, int b){
	cout << "Soy la suma =" << return a+b;
}

