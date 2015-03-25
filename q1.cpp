#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a==b)
	{
		return a;
	}
	else if (a>b)
	{
		return gcd(a-b, b);
	}
	else	
	{
		return gcd(a, b-a);
	}
}



int main ()
{
	int x,y;
	cout<<"Ingresa dos numeros."<<endl;
	cin>>x>>y;
	cout<<"El gcd de esos numeros es: "<<gcd(x,y)<<endl;
	return 0;
}