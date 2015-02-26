#include <iostream>
using namespace std;
int main()
{
	int x, y, suma, resta, multiplicación, división, residuo;
	cout<<"Escriba el primer número: " ;
	cin>>x;
	cout<<"Escriba el segundo número: " ;
	cin>>y;
	suma=x+y;
	resta=x-y;
	multiplicación=x*y;
	división=x/y;
	residuo=x%y;
	cout<<"La suma de los dos números es: " <<suma <<endl;
	cout<<"La resta de los dos números es: " <<resta <<endl;
	cout<<"El producto de los dos números es: " <<multiplicación <<endl;
	cout<<"El cociente de los dos números es: "<<división <<endl;
	cout<<"El residuo de la división de los dos números es: "<<residuo <<endl;
	return 0;
}