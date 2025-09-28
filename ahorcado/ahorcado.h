#include "utilitarios.h"
#include "palabras.h"
#include "mostrar.h"

#ifndef AHORCADO_H
#define AHORCADO_H

inline void inicializarJuego(string& palabra, int& intentos, int& maxIntentos, string& categoria) {
    srand((unsigned)time(0));
    int indiceCategoria = rand() % todasLasCategorias.size();
    categoria = nombresCategorias[indiceCategoria];
    int indicePalabra = rand() % todasLasCategorias[indiceCategoria].size();
    palabra = todasLasCategorias[indiceCategoria][indicePalabra];
    
    intentos = 0;
    maxIntentos = 10;
}

inline bool letraYaIngresada(char letra, const vector<char>& letrasAdivinadas, const vector<char>& letrasIncorrectas) {
    for (int i = 0; i < letrasAdivinadas.size(); i++) {
        if (letrasAdivinadas[i] == letra) {
            cout << "Ya ingresaste esa letra. Presiona Enter para continuar...";
            cin.ignore();
            cin.get();
            return true;
        }
    }
    for (int i = 0; i < letrasIncorrectas.size(); i++) {
        if (letrasIncorrectas[i] == letra) {
            cout << "Ya ingresaste esa letra. Presiona Enter para continuar...";
            cin.ignore();
            cin.get();
            return true;
        }
    }
    return false;
}

inline bool palabraAdivinada(const string& palabra, const vector<char>& letrasAdivinadas) {
    for (int i = 0; i < palabra.size(); i++) {
        char c = palabra[i];
        bool encontrada = false;
        for (int j = 0; j < letrasAdivinadas.size(); j++) {
            if (letrasAdivinadas[j] == c) {
                encontrada = true;
                break;
            }
        }
        if (!encontrada) {
            return false;
        }
    }
    return true;
}

inline bool juegoTerminado(int intentos, int maxIntentos, bool palabraAdivinada) {
    return intentos >= maxIntentos || palabraAdivinada;
}

inline void procesarLetra(char letra, string& palabra, vector<char>& letrasAdivinadas, vector<char>& letrasIncorrectas, int& intentos) {
    bool letraEnPalabra = false;
    palabra = convertirALetraMinuscula(palabra);
    for (int i = 0; i < palabra.size(); i++) {
        if (palabra[i] == letra) {
            letraEnPalabra = true;
            break;
        }
    }

    if (letraEnPalabra) {
        bool yaEsta = false;
        for (int i = 0; i < letrasAdivinadas.size(); i++) {
            if (letrasAdivinadas[i] == letra) {
                yaEsta = true;
                break;
            }
        }
        if (!yaEsta) {
            letrasAdivinadas.push_back(letra);
        }

    } else {
        bool yaEsta = false;
        for (int i = 0; i < letrasIncorrectas.size(); i++) {
            if (letrasIncorrectas[i] == letra) {
                yaEsta = true;
                break;
            }
        }
        if (!yaEsta) {
            letrasIncorrectas.push_back(letra);
            intentos++;
        }
    }
}

inline void ejecutarJuego(string& palabra, int& intentos, int maxIntentos, vector<char>& letrasAdivinadas, vector<char>& letrasIncorrectas, const string& categoria) {
    while (!juegoTerminado(intentos, maxIntentos, palabraAdivinada(palabra, letrasAdivinadas))) {
        limpiarConsola();
        mostrarCategoria(categoria);
        mostrarAhorcado(intentos);
        mostrarProgreso(palabra, letrasAdivinadas);
        mostrarLetrasIncorrectas(letrasIncorrectas);
        char letra = pedirLetra();
        if (!letraYaIngresada(letra, letrasAdivinadas, letrasIncorrectas)) {
            procesarLetra(letra, palabra, letrasAdivinadas, letrasIncorrectas, intentos);
        }        if (palabraAdivinada(palabra, letrasAdivinadas)) {
            limpiarConsola();
            mostrarCategoria(categoria);
            mostrarAhorcado(intentos);
            mostrarResultadoFinal(true, palabra, intentos, maxIntentos, letrasIncorrectas);
            return;
        }
    }
    limpiarConsola();
    mostrarCategoria(categoria);
    mostrarAhorcado(intentos);
    mostrarResultadoFinal(false, palabra, intentos, maxIntentos, letrasIncorrectas);
}

#endif