#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	
int random, x, cont=1;
srand (time(NULL));
random = 1 + rand()%100;

cout<<"Adivinar un numero entre 1 y 100."<<endl;
cout<<"Ingrese un número: "<<endl;
cin>>x;

while (x!=random)
{
	cont++;
	if (x<random)
	{
		cout<<"Ingresa un numero mayor: "<<endl;
		cin>>x;
	}

	else
	{
		cout<<"Ingresa un numero menor"<<endl;
		cin>>x;
	}

} 

cout<<"Acertaste. El numero es "<<x<<". Adivinarlo te tomo "<<cont<<" intentos."<<endl;
return 0; 
}