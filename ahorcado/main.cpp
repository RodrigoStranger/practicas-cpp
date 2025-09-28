#include "ahorcado.h"

int main () {
    string palabra;
    int intentos;
    int maxIntentos;
    vector<char> letrasAdivinadas;
    vector<char> letrasIncorrectas;
    inicializarJuego(palabra, intentos, maxIntentos, animales);
    ejecutarJuego(palabra, intentos, maxIntentos, letrasAdivinadas, letrasIncorrectas, "Animales");
    return 0;
}