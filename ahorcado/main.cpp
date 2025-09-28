#include "ahorcado.h"

int main () {
    string palabra;
    int intentos;
    int maxIntentos;
    string categoria;
    vector<char> letrasAdivinadas;
    vector<char> letrasIncorrectas;
    
    inicializarJuego(palabra, intentos, maxIntentos, categoria);
    ejecutarJuego(palabra, intentos, maxIntentos, letrasAdivinadas, letrasIncorrectas, categoria);
    return 0;
}