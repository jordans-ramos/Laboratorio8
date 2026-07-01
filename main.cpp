#include <iostream>
#include <string>
#include "head.h"

using namespace std;

int main() {
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

    return 0;
}
