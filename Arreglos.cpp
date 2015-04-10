#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float arreglo1[10];
	float suma=0;
	float promedio, cuadrado=0, desviacion;
	for (int i=0; i<10; i++)
	{
		cout<<"Ingresa el valor numero "<<(i+1)<<" : "<<endl;
		cin>>arreglo1[i];
	}

	for (int i=0; i<10; i++)
	{
	suma+=arreglo1[i];
	cuadrado+=(arreglo1[i])*(arreglo1[i]);
	}
	promedio=suma/10;
	desviacion=sqrt(cuadrado/10);
	cout<<"La suma de los numeros que ingresaste es: "<<suma<<endl;
	cout<<"El promedio de los numeros que ingresaste es: "<<promedio<<endl;
	cout<<"La desviacion estandar de los numeros que ingresaste es: "<<desviacion<<endl;





	/*
	cuadrado+=(arreglo1[i])*(arreglo1[i]);
	desviacion=cuadrado/10;
	*/
	/*for (int i=0; i<10; i++)
	{
		cout<<arreglo1[i]<<endl;
	}*/
return 0;
}