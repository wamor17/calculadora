#include <iostream>

using namespace std;

float suma(int a, int b);
float resta(int a, int b);
float producto(int a, int b);
float division(int a, int b);

int main(){

	int num=0, a=0, b=0;
	cout<<"\n Escoge una operacion \n ";
	cin>>num;
	cout<<"\n Introduzca los dos numeros: \n ";
	cin>>a>>b;

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

float producto(int a, int b){
	cout<<"\n Soy el producto = "<<a*b;
}
