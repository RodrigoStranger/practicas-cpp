// Las librerías en C++ son colecciones de funciones y clases que permiten realizar tareas 
// específicas sin necesidad de escribir todo el código desde cero.

// En c++ tenemos varias librerías estándar que nos permiten realizar operaciones comunes como
// entrada/salida, manipulación de cadenas, matemáticas, entre otras.

// iostream: Para entrada/salida estándar, se usa para imprimir en consola y leer datos del usuario.
#include <iostream>

// cmath: Para funciones matemáticas como sqrt, pow, max, min, abs, etc. Esta librería nos permite realizar operaciones 
// matemáticas avanzadas.
#include <cmath>

// cstdlib: Para funciones de utilidad general como rand, srand, malloc, free, etc. 
// Esta librería es útil para trabajar con memoria dinámica y generar números aleatorios.
#include <cstdlib>

// ctime: Para manipulación de tiempo y fecha, se usa para obtener la hora actual, 
// medir el tiempo de ejecución, etc.
#include <ctime>

#include <string> // Para manipulación de cadenas de caracteres
#include <vector> // Para trabajar con vectores (arrays dinámicos)
#include <algorithm> // Para funciones de algoritmos como sort, find, etc.

using namespace std;

int main() {

    const int filas = 3;
    const int columnas =3;

    vector<vector<int>> matriz(filas, vector<int> (columnas, 0));
                            
    matriz[0][0] = 5;
    matriz[0][1] = 9;
    matriz[0][2] = 5;
    matriz[1][0] = 9;
    matriz[1][1] = 5;
    matriz[1][2] = 9;
    matriz[2][0] = 5;
    matriz[2][1] = 9;
    matriz[2][2] = 9;
    
    for(int i = 0; i < filas; i = i + 1) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " "; 
        }
        cout << endl;
    }

    // matriz[0][0] matriz[0][1] matriz[0][2]
    // matriz[1][0] matriz[1][1] matriz[1][2]
    // matriz[2][0] matriz[2][1] matriz[2][2]
    
    return 0;
}