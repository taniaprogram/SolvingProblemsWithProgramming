#include <iostream>
using namespace std;

int main ()
{
    int n1,x;
	int n2;
	int suma=0;
	cout<<"Ingresar el límite inferior "<<endl;
	cin>>n1;
	cout<<"Ingresar el límite superior "<<endl;
	cin>>n2;
	x=n1;

	while (n1<=n2)
	{
	suma+=n1;
	n1++;
	}

	/*for (int i = n1 ; i<=n2; i++)
	{
		suma+=i;
	} */

	cout<<"La suma de los números entre " <<x<< " y " <<n2<< " es: "<<suma<<endl;
	return 0;
}