#include "librerias.h"

#ifndef PEDIR_H
#define PEDIR_H

inline char convertirALetraMinuscula(char letra) {
    return tolower(letra);
}

inline string convertirALetraMinuscula(const string& texto) {
    string resultado = texto;
    for (char& c : resultado) {
        c = tolower(c);
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
    char letra;
    cin >> letra;
    letra = convertirALetraMinuscula(letra);
    return letra;
}

#endif