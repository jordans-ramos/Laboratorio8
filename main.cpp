#include "head.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
    int opcion;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Ejercicio #1\n";
        cout << "2. Ejercicio #2\n";
        cout << "3. Ejercicio #3\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:{
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
                break;
            }
            case 2:
                ejercicio2();
                break;
            case 3:{
            	cin.ignore();
                string textoPrueba = "El primer hombre en pisar la luna fue Neil Amstrong";
    			string siglasObtenidas = obtenerSiglas(textoPrueba);
    			cout << " OBTENCION DE SIGLAS" << endl;
    			cout << "Texto original: " << textoPrueba << endl;
    			cout << "Siglas: " << siglasObtenidas << endl;
    			string numeroTexto = "2026";
    			int numeroEntero = stringAEntero(numeroTexto);
    			cout << "\n CONVERSION STRING A INT" << endl;
    			cout << "Cadena original: \"" << numeroTexto << "\"" << endl;
    			cout << "Entero + 4: " << (numeroEntero + 4) << endl; 
    			
    			caracterFrecuente();
                break;
            }
            case 0:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida.\n";
        }

    } while (opcion != 0);

    return 0;
}













