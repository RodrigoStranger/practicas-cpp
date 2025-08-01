#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Ejemplo de uso de un bucle while
    int count = 0;
    while (count < 5) {
        cout << "Count is: " << count << endl;
        count++;
    }


    // Ejemplo de uso de un bucle while con una condición más compleja
    int number;
    cout << "Ingrese un número positivo (0 para salir): ";
    cin >> number;
    while (number != 0) {
        cout << "Usted ingresó: " << number << endl;
        cout << "Ingrese un número positivo (0 para salir): ";
        cin >> number;
    }
    cout << "Programa terminado." << endl;


    // Ejemplo de uso de un bucle while con un vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    int index = 0;
    cout << "Elementos del vector: ";
    while (index < numbers.size()) {
        cout << numbers[index] << " ";
        index++;
    }
    cout << endl;

}