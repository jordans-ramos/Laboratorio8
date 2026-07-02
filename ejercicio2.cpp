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
	int matriz[10][10];
	int n;
	cout<<"Ingrese el tamaño para la matriz: "<<endl;
	cin>>n;
	
//	int matriz[4][4]={
//	{1,2,3,4},
//	{5,6,7,8},
//	{9,10,11,12},
//	{13,14,15,16}	
//	};
	mostrarMatriz(matriz,n);
	Maximo(matriz, n);
}

//void mostrarMatriz(int arr[10][10], int n){
//    int contador = 1;
//
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            arr[i][j] = contador++;
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

void mostrarMatriz(int arr[10][10], int n){
	for(int i =0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i++][j++] +=1;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
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
	printf("El numero mayor es %d\n", max);
}

//void Minimo(int arr[4][])
