//Tania Lizbet Pardo Maldonado / A01229350
#include <iostream>
using namespace std;
long fibonacci (long n)
{
	int valor1 = 0, valor2=1, ans=0;

	if(n==0)
		return 0;
	if (n==1)
	{
		return 1;
	}

	for(int i = 0; i<=n-2; i++){
		ans = valor1 + valor2;
		valor1 = valor2;
		valor2 = ans;
	}
	return ans;
}

int main ()
{
	long n;
	cout<<"Ingresa posicion:";
	cin>>n;
	cout<<"El numero de Fibonacci es: "<<fibonacci(n)<<endl;
	return 0;
}
