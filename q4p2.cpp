//Tania Lizbet Pardo Maldonado / A01229350
#include <iostream>
#include <string>
#include <iterator>
using namespace std;

bool isPalindrome(string x){
	if ((x.length()==0) or (x.length()==1)){
		return true;
	}
	else if (x.begin() == x.end()){
		return isPalindrome(x.substr(1, x.length()-2));
	}
	else{
		return false;
	}
}

int main()
{
	string x;
	cout<<"Ingresa la palabra: ";
	cin>>x;
	if (isPalindrome(x)){
		cout<<"Es palíndromo."<<endl;
	}
	else{
		cout<<"No es palíndromo."<<endl;
	}
	return 0;
}
