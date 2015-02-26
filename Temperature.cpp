#include <iostream>
using namespace std;
int main()
{
	float F, C;
	cout<<"¿Cuál es la temperatura en Fahrenheit? ";
	cin>>F;
	C=5*(F-32)/9;
	cout<<"La temperatura en grados Celsius es de: " <<C <<endl;
	if (C<=100) 
	{
		cout<<"En condiciones normales, el agua no hierve a esta temperatura." << endl;
	}
	else
	{

		cout<<"En condiciones normales, el agua hierve a esta temperatura." << endl;
	}
	return 0;

}