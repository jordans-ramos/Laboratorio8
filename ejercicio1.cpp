#include "head.h"
#include <iostream>
#include <cmath>

using namespace std;

double calcularMedia(const double datos[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += datos[i];
    }
    return suma / n;
}

double calcularVarianza(const double datos[], int n, double media) {
    double sumaCuadrados = 0;
    for (int i = 0; i < n; i++) {
        sumaCuadrados += pow(datos[i] - media, 2);
    }
    return sumaCuadrados / (n - 1);
}

double calcularDesviacionEstandar(double varianza) {
    return sqrt(varianza);
}

double calcularCurtosis(const double datos[], int n, double media, double desviacion) {
    if (desviacion == 0) return 0; 
    
    double sumaCuarta = 0;
    for (int i = 0; i < n; i++) {
        sumaCuarta += pow((datos[i] - media) / desviacion, 4);
    }
    return (sumaCuarta / n) - 3.0;
}

void buscarMaxMin(const double datos[], int n, double& maximo, double& minimo) {
    maximo = datos[0];
    minimo = datos[0];
    
    for (int i = 1; i < n; i++) {
        if (datos[i] > maximo) maximo = datos[i];
        if (datos[i] < minimo) minimo = datos[i];
    }
}

void mostrarResultados(double media, double varianza, double desviacion, double curtosis, double maximo, double minimo) {
    cout << "--- RESULTADOS ---" << endl;
    cout << "Media Aritmetica: " << media << endl;
    cout << "Varianza: " << varianza << endl;
    cout << "Desviacion Estandar: " << desviacion << endl;
    
    cout << "Curtosis: " << curtosis << " ";
    if (curtosis > 0) cout << "(Leptocurtica - Apuntada)" << endl;
    else if (curtosis < 0) cout << "(Platicurtica - Aplanada)" << endl;
    else cout << "(Mesocurtica - Normal)" << endl;
    
    cout << "Valor Maximo: " << maximo << endl;
    cout << "Valor Minimo: " << minimo << endl;
}


