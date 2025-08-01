#include <iostream>
#include <vector>

using namespace std;

template <typename tipo>
void imprimirLista(const vector<tipo> &lista) {
    cout << "[";
    for(int i = 0; i < lista.size(); i++) {
        cout << lista[i];
        if(i < lista.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
    cout << endl;
}

void escribirNotas(vector<double> &notas) {
    double nota = 0;
    cout << "Ingrese las 5 notas: " << endl;
    for(int i = 0; i < 5; i++) {
        bool llave = true;
        while(llave) {
            cout << "Nota " << i + 1 << ": ";
            cin >> nota;
            if(nota >= 0 && nota <= 20) { // nota valida es desde 0 a 20
                notas.push_back(nota); // agregar una nota a la lista de notas
                llave = false;
            } else {
                cout << "Nota invalida: " << nota << ". Ingrese una nueva nota" << endl;
            }
        }
    }
}

void promedioNotas(const vector<double> &notas) {
    double promedio = 0;
    for(int i = 0; i < notas.size(); i++) {
        promedio = promedio + notas[i];
    }
    
    promedio = promedio / notas.size();
    
    cout << "\nPromedio calculado: " << promedio << endl;
}

int main() {
    
    vector<double> notas;
    
    escribirNotas(notas);
    
    cout << "\nNotas registradas:" << endl;
    imprimirLista(notas);
    
    promedioNotas(notas);
    
    return 0;
    
}