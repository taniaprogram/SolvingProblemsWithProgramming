//Tania Lizbet Pardo Maldonado / A01229350
#include <iostream>
#include <math.h>
using namespace std;
long superpower( int b, int e)
{
	cout<<"El resultado de elevar "<<b<<" a la "<< e<< " es "<<(pow(b,e))<<endl;
}


int main ()
{
	int b, e;
	cout<<"Ingresa la base:"<<endl;
	cin>>b;
	cout<<"Ingresa el exponente"<<endl;
	cin>>e;
	superpower(b,e);
	return 0;
}
