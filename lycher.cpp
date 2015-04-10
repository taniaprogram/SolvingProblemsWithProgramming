#include <iostream>
#include <math.h>
#include <vector>

using namespace std; 

int palnat=0, lycher=0, pal=0;


//Regresa la cantidad de cifras que tiene el parametro numero
int cantidadCifras(int numero){
	int cifras; 
	cifras = trunc(log10(numero)); 
	cifras++ ;
	return cifras;
}

//Regresa el inverso de cierto numero
int inverso(int numero)
{
	int cifras = cantidadCifras(numero);
	int x, inv=0;
	vector<int> numeroV (cifras); 

	//Invierte el orden del numero y lo acomoda en un vector
	for(int i = 0; i<numeroV.size(); i++){
		x = numero%10;
		numeroV[i]=x;
		numero = numero/10;
	}

	//Convierte los numeros del vector en un valor numerico segun su posicion
	for(int i = 0; i<numeroV.size(); i++){
		inv += numeroV[i]*pow(10,cifras-1);
		cifras--;
	}

	return inv;
}

bool palindromo(int numero)
{
	int cifras = cantidadCifras(numero); 
	int derecha, izquierda;

	//Cifra más a la derecha
	derecha = (int)numero/pow(10,cifras-1);

	//Cifra más a la izquierda
	izquierda = numero%10;

	//Caso mas sencillo 
	if(cifras == 1 or numero == 0)
	{
		return true;
	}

	//Si son iguales el primero y el ultimo...
	else if( derecha == izquierda)
	{
		//Elimina la cifra de la derecha
		numero = numero%(int)pow(10,cifras-1);
		//Elimina la cifra de la izquiera 
		numero = numero/10;

		//Regresa la funcion con solo los numeros del medio
		return palindromo(numero);
	}

	//Si no se cumple nada, no es palindromo
	else
	{
		return false;
	}
}

bool tryLycher(int numero){
	for(int i = 0; i<30; i++){
		numero = numero + inverso(numero);
		if(palindromo(numero)){
			return false;
		}

	}

	return true;
}

void identificar (int lower, int upper)
{
	for (int i=lower; i<=upper; i++)
	{
		if(palindromo(i)){
			palnat++;
		}
		else if(tryLycher(i)){
			cout<<"Lycher numer found: "<<i<<endl;
			lycher++;
		}
		else 
			pal++;
	}
}

int main()
{
	int lower, upper;
	cout<<"Ingresa limite inferior."<<endl;
	cin>>lower;
	cout<<"Ingresa limite superior;"<<endl;
	cin>>upper;
		
	identificar(lower, upper);
	cout<<"Palindromos naturales: "<<palnat<<"  "<<endl;
	cout<<"No lycher: "<<pal<<endl;
	cout<<"Candidatos a lycher numbers: "<<lycher<<endl;
	//cout<<inverso(x)<<endl;
	
}



