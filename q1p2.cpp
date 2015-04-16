//Tania Lizbet Pardo Maldonado / A01229350
#include <iostream>
using namespace std;


void triangulo(int n)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<i; j++)
		{
			cout<<"T";
		}
		cout<<endl;
	}
	for (int i=(n-1); i>=1; i--)
	{
		for (int j=0; j<i; j++)
		{
			cout<<"T";
		}
		cout<<endl;
	}
}
int main ()
{
int n;
cout<<"Ingresa el tamaño del triangulo: "<<endl;
cin>>n;
triangulo(n);
return 0;
}
