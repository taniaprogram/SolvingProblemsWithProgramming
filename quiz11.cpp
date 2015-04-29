#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

void readNumbersFromFile (string numeros){
ifstream AbrirArchivo;
AbrirArchivo.open (numeros);
int cell, suma=0, lineas=0;
float promedio, cuadrados=0, desviacion;

	if(AbrirArchivo.good()){
		while(AbrirArchivo.tellg() != -1){
			AbrirArchivo >> cell;
			if(AbrirArchivo.tellg() != -1){
			cout<<cell<<" "<<suma<<endl;
			suma += cell;
			lineas++;
			}
			
		}
		AbrirArchivo.close();
		AbrirArchivo.open(numeros);
		promedio=((float) suma/lineas);

		for (int i=0; i<lineas; i++){
			AbrirArchivo >> cell;
			cuadrados += pow((cell-promedio), 2);
		}

		desviacion = sqrt(cuadrados/lineas);
		
		cout<<"La suma de los valores es: "<<suma<<endl;
		cout<<"El numero de lineas es: "<<lineas<<endl;
		cout<<"El promedio de los numeros es: "<<promedio<<endl;
		cout<<"La desviacion estandar es: "<<desviacion<<endl;
	    
	} else {
	    cout << "Something is wrong with the input file" << endl;
	  }

}

void check_banana (string banana){
ifstream AbrirBanana;
AbrirBanana.open(banana);
string cell;
int n = 0;

		while(AbrirBanana.tellg() != -1){
			AbrirBanana >> cell;
			for(int i = 0; i< cell.size(); i++){
				if( (cell[i] == 'B' or cell[i] == 'b') and
					(cell[i+1] == 'A' or cell[i+1] == 'a') and
					(cell[i+2] == 'N' or cell[i+2] == 'n') and
					(cell[i+3] == 'A' or cell[i+3] == 'a') and
					(cell[i+4] == 'N' or cell[i+4] == 'n') and
					(cell[i+5] == 'A' or cell[i+5] == 'a') )
					n++;
			}
		}
		cout<<"La cantidad de veces que está escrita la palabra banana es: "<<n<<endl;
}

int main(){
	//readNumbersFromFile("numeros.txt");
	check_banana("banana.txt");
	return 0;
}