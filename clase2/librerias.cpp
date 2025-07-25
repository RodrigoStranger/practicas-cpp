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
    
    // Ejemplo de uso de las librerías
    // Usando iostream para entrada/salida
    cout << "Hola, mundo!" << endl;
    // Usando cmath para calcular la raíz cuadrada
    double numero = 16.0;
    double raiz = sqrt(numero);
    cout << "La raíz cuadrada de " << numero << " es " << raiz << endl;
    
    // Usando cstdlib para generar un número aleatorio
    srand(static_cast<unsigned int>(time(0))); // Semilla para números aleatorios
    int numeroAleatorio = rand() % 100; // Genera un número aleatorio entre 0 y 99
    cout << "Número aleatorio: " << numeroAleatorio << endl;

    // Usando ctime para obtener la hora actual
    time_t ahora = time(0);
    char* fechaHora = ctime(&ahora);
    cout << "Fecha y hora actual: " << fechaHora;

    // Usando string para manipulación de cadenas
    string saludo = "Hola, C++!";
    cout << "Saludo: " << saludo << endl;

    // Usando vector para trabajar con arrays dinámicos
    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Números en el vector: ";
    for (int num : numeros) {
        cout << num << " ";
    }

    cout << endl;

    // Usando algorithm para ordenar el vector
    sort(numeros.begin(), numeros.end());
    cout << "Números en el vector (ordenados): ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Usando algorithm para encontrar un elemento
    auto it = find(numeros.begin(), numeros.end(), 3);
    if (it != numeros.end()) {
        cout << "El número 3 se encuentra en el vector." << endl;
    } else {
        cout << "El número 3 no se encuentra en el vector." << endl;
    }

    // Fin del ejemplo
    cout << "Fin del programa." << endl;

    return 0;
}