#include <iostream>
#include <vector>
using namespace std;

float dotProduct(vector <float> v1, vector <float> v2)
{
	float producto=0;
	if(v1.size()==v2.size())
	{
		for (int i=0; i<v1.size(); i++)
		{
			producto += ((v1[i])*(v2[i]));
		}
	}
	else
	{
		cout<<"Not same size vectors."<<endl;
		return -1;
	}
	return producto;
}

int findThrees (vector <int> numeros)
{
	int suma=0;
	for (int i=0; i<numeros.size(); i++)
	{
		if (numeros[i]%3==0)
		{
			suma+=numeros[i];
		}
	}
	return suma;
}
int main()
{
	vector<int> numeros(5) ;
	vector <float> v1;
	vector <float> v2;
	v1.push_back(2);
	v2.push_back(5);
	v1.push_back(1);
	for(int i = 0; i<5; i++)
	{
		cout<<"Ingresar números: "<<endl;
		cin>>numeros[i];
	}
	cout<<findThrees(numeros)<<endl;
	cout<<dotProduct(v1, v2)<<endl;
	return 0;
}