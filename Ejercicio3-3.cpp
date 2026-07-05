#include <iostream>
#include <string>
#include "head.h"
using namespace std;

void caracterFrecuente(){
	string texto;
	int mayor = 0;
	char caracter;
	cout << "Ingrese una cadena de texto: " << endl;
	getline(cin, texto);
	
	for(int i=0;i<texto.length();i++){
		int contador = 0;
		for(int j=0;j<texto.length();j++){
			if(texto[i] == texto[j]) contador++;
		}
		if(contador > mayor){
		mayor = contador;
		caracter = texto[i];
		}
	}
	
	cout << "El caracter mas frecuente es: " << "[ " << caracter << " ]" << " con una frecuencia de: " << mayor << endl;
	
}