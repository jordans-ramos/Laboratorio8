#include "head.h"
#include <string>
#include <iostream>

using namespace std;

string obtenerSiglas(const string& texto) {
    string siglas = "";
    int n = texto.length();
    
    if (n == 0) return siglas;

    if (texto[0] != ' ') {
        char c = texto[0];
        if (c >= 'a' && c <= 'z') c = c - 32; 
        siglas += c;
    }

    for (int i = 1; i < n; i++) {
        if (texto[i - 1] == ' ' && texto[i] != ' ') {
            char c = texto[i];
            if (c >= 'a' && c <= 'z') c = c - 32;
            
            if (!siglas.empty()) {
                siglas += '.';
            }
            siglas += c;
        }
    }

    return siglas;
}

int stringAEntero(const string& texto) {
    int resultado = 0;
    int inicio = 0;
    bool esNegativo = false;

    if (texto.empty()) return 0;

    if (texto[0] == '-') {
        esNegativo = true;
        inicio = 1;
    } else if (texto[0] == '+') {
        inicio = 1;
    }

    for (int i = inicio; i < texto.length(); i++) {
        if (texto[i] >= '0' && texto[i] <= '9') {
            resultado = (resultado * 10) + (texto[i] - '0');
        } else {
            break; 
        }
    }

    return esNegativo ? -resultado : resultado;
}

