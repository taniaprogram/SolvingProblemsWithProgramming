#include <iostream>
#include <cmath>
using namespace std; 

int factorial(int n){
	int fact = 1; 

	for(int i=1; i<=n; i++){
		fact *= i;
	}
	return fact;
}

double calculateE (int decimals){

	int n = 0; 
	double guess = 0, acc, precision = pow(10.0, decimals * -1);

	do {
		acc = (double) 1/factorial(n);  //Numero que hay que agregar
		guess += acc;                   //Operacon para añadirle el siguiente elemento
		n++;
	} while(acc > precision);       

	//Acota 'guess' a la cantidad de decimales pedidas
	guess *= (double) pow(10,decimals);
	guess = floor(guess);
	guess /= pow(10,decimals);

	return guess; 
}

int main(){

	int decimals;
	cout<<"Ingrese la cantidad de decimales que desea conocer del numero e: "<<endl;
	cin>>decimals;

	cout<<"El numero e con "<<decimals<<" decimales es: "<<calculateE(decimals)<<endl;

}