#include <iostream>
#include "head.h"

using namespace std;

int main() {
    double datos[] = {12.5, 15.2, 10.8, 14.0, 18.6, 11.4, 13.1};
    
    int n = sizeof(datos) / sizeof(datos[0]);
    
    if (n < 2) {
        cout << "Error-> La cantidad de datos es insuficiente para el analisis" << endl;
        return 1;
    }

    double media = calcularMedia(datos, n);
    double varianza = calcularVarianza(datos, n, media);
    double desviacion = calcularDesviacionEstandar(varianza);
    double curtosis = calcularCurtosis(datos, n, media, desviacion);
    double maximo, minimo;
    
    buscarMaxMin(datos, n, maximo, minimo);

    mostrarResultados(media, varianza, desviacion, curtosis, maximo, minimo);

    return 0;
}
