#include <iostream>

using namespace std;

int main() {
    // Operadores aritméticos
    int a = 5;
    int b = 10;
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    float division = (float)a / (float)b; // conversion de tipos para evitar división entera

    // Operadores de comparación
    bool esIgual = (a == b);
    bool esMayor = (a > b);
    bool esMenor = (a < b);

    // Operadores lógicos
    bool resultado = (a < b) && (b > 5);

    return 0;
}