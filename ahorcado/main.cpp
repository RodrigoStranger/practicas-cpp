#include "ahorcado.h"


int main () {
    cout << "¡Bienvenido al juego del Ahorcado!" << endl;

    // Variables principales
    string palabra;
    int intentos;
    int maxIntentos;
    vector<char> letrasAdivinadas;
    vector<char> letrasIncorrectas;

    // Elegir categoría (ejemplo: animales)
    inicializarJuego(palabra, intentos, maxIntentos, animales);

    // Ejecutar el juego
    ejecutarJuego(palabra, intentos, maxIntentos, letrasAdivinadas, letrasIncorrectas, "Animales");

    return 0;
}
