#include "librerias.h"

#ifndef UTILITARIOS_H
#define UTILITARIOS_H

inline char convertirALetraMinuscula(char letra) {
    return tolower(letra);
}

inline string convertirALetraMinuscula(const string& texto) {
    string resultado = texto;
    for (int i = 0; i < resultado.size(); i++) {
        resultado[i] = tolower(resultado[i]);
    }
    return resultado;
}

inline void limpiarConsola() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

inline char pedirLetra() {
    cout << "\nEscribe una letra: ";
    char letra;
    cin >> letra;
    letra = convertirALetraMinuscula(letra);
    return letra;
}

#endif