#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Como crear un vector de diferentes tipos de datos
    vector<int> vecInt = {1, 2, 3, 4, 5};
    vector<double> vecDouble = {1.1, 2.2, 3.3, 4.4, 5.5};
    vector<string> vecString = {"Hello", "World", "C++", "Vectors"};
    vector<char> vecChar = {'A', 'B', 'C', 'D', 'E'};
    vector<bool> vecBool = {true, false, true, false};
    vector<float> vecFloat = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    vector<long> vecLong = {100000L, 200000L, 300000L};

    // Como inicializar un vector con valores por defecto
    vector<int> vecDefault(5, 0); // Vector de 5 enteros
    vector<double> vecDefaultDouble(3, 1.1); // Vector de 3 doubles con valor 1.1

    // Como acceder a los elementos de un vector
    cout << "Elementos del vector de enteros: ";
    cout << vecInt[0] << ", " << vecInt[1] << ", " << vecInt[2] << ", " << vecInt[3] << ", " << vecInt[4] << endl;


    // Funciones de la librería vector
    cout << "Tamaño del vector de enteros: " << vecInt.size() << endl;
    cout << "Capacidad del vector de enteros: " << vecInt.capacity() << endl;
    cout << "¿El vector de enteros está vacío? " << (vecInt.empty() ? "Sí" : "No") << endl;
    vecInt.push_back(6); // Añadir un elemento al final
    cout << "Nuevo tamaño del vector de enteros después de añadir un elemento: " << vecInt.size() << endl;
    vecInt.pop_back(); // Eliminar el último elemento
    cout << "Tamaño del vector de enteros después de eliminar el último elemento: " << vecInt.size() << endl;
    vecInt.clear(); // Limpiar el vector
    cout << "Tamaño del vector de enteros después de limpiar: " << vecInt.size() << endl;

    cout << "Eliminar el valor de un vector segun su posicion: " << endl;
    vecInt = {1, 2, 3, 4, 5}; // Re-inicializar el vector
    vecInt.erase(vecInt.begin() + 2); // Eliminar el tercer elemento (3)

    
    return 0;
}