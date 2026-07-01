#include <iostream>
#include <stdio.h>
#include "head.h"

using namespace std;

void ejercicio2(){
	int matriz[4][4]={
	{1,2,3,4},
	{1,2,3,0},
	{1,2,3,0},
	{1,2,3,0}	
	};
	Maximo(matriz, 4);
}

void Maximo(int arr[4][4], int n){
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

