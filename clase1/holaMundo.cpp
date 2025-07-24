#include <iostream>

using namespace std;

int sumaNumeros(int a, int b) {
    return a + b;
}
int main() {
    
    int numero1 = 10;
    int numero2 = 12;

    int resultado = sumaNumeros(numero1, numero2);

    cout << resultado << endl;

    return 0;
}