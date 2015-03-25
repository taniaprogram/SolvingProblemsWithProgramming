#include <iostream>
#include <string>
#include <vector>
using namespace std;

void triangles(int n)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<i; j++)
		{
		cout<<'T';
		}
		cout<<endl;
	}
	for (int i=n-1; i>0; i--)
	{
		for (int j=0; j<i; j++)
		{
		cout<<'T';
		}
		cout<<endl;
	}
}

void trianglesV(vector <char> V, int n)
{
	for (int i=1; i<=n; i++)
	{
		V.push_back('T'); 

		for (int i=0; i<V.size(); i++)
		{
		cout<<V[i];
		}
		cout<<endl;
	}
	for (int i=n-1; i>0; i--)
	{
		V.pop_back(); 

		for (int i=0; i<V.size(); i++)
		{
		cout<<V[i];
		}
		cout<<endl;
	}

	
}

int main ()
{
	int n;
	vector <char> V;
	cout<<"Ingresa el tamaño del triangulo."<<endl;
	cin>>n;
	triangles(n);
	cout<<endl;
	trianglesV(V, n);
	return 0;
}