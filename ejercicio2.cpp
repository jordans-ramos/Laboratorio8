#include <iostream>
#include <stdio.h>
#include "head.h"

using namespace std;
/*
Elabore una biblioteca que dada una matriz (arreglo bidimensional) 
calcule el elemento máximo, mínimo, traza, matriz transpuesta 
y una función para comprobar si una matriz es simétrica o no.
*/
void ejercicio2(){
	//int matriz[10][10];
	int n;
	cout<<"Ingrese el tamaño para la matriz: "<<endl;
	cin>>n;
	
//	comprobacion de funcion simetrica
//	int matriz[10][10]={
//	{1,2,3},
//	{2,1,7},
//	{3,7,1}	
//	};
	mostrarMatriz(matriz,n);
	cout<<endl;
	Maximo(matriz, n);
	cout<<endl;
	Minimo(matriz, n);
	cout<<endl;
	trazaMatriz(matriz, n);
	cout<<endl;
	//transpuesta(matriz, n);
	Transpuesta(matriz, n);
	simetrica(matriz, n);
}

void mostrarMatriz(int arr[10][10], int n){
    int contador = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = contador++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void Maximo(int arr[10][10], int n){
	int max = arr[0][0];
	for(int i=0; i<n; i++){
		for(int j =0; j<n;j++){
			
			if(arr[i][j]>max){
				max = arr[i][j];
			}
		}
	}
	printf("El numero mayor del arreglo es: %d\n", max);
}

void Minimo(int arr[10][10], int n){

	int min = arr[0][0];
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]<=min){
				min = arr[i][j];
			}
		}
	}
	cout<<"El numero menor del arreglo es: "<<min<<endl;
}

void trazaMatriz(int arr[10][10], int n){
	int suma=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				suma += arr[i][j];
			}
		}
	}
	cout<<"La traza de la matriz es: "<<suma<<endl;
}

void transpuesta(int arr[10][10], int n){
	int aux;
	cout<<"Matriz transpuesta: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	
}

void Transpuesta(int arr[10][10], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int aux = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = aux;
        }
    }
	cout<<"Matriz transpuesta: "<<endl;
	
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void simetrica(int arr[10][10], int n){
	bool simetrica= true;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]!=arr[j][i])
			simetrica = false;
			break;
		}
	}
	if(simetrica==true)cout<<"Es simetrica. "<<endl;
	else cout<<"No es simetrica. "<<endl;
}

