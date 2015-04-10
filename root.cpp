#include <iostream>
#include <cmath>
using namespace std; 

float baby(float s){

	float x = 100;
	float precision = 0.01;

	do{
		x = (x + (s/x))/2;

	} while(abs(x*x - s) > precision);

	return x;
}

int main(){
	float s; 

	cout<<"Ingresa un numero para sacar la raiz cuadrada: ";
	cin>> s; 

	cout<<"La raiz es :"<<baby(s)<<endl;


}