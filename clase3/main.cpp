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

vector<double> escribirNotas(vector<double> &notas) {
    double nota = 0;
    cout << "Ingrese las 5 notas: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        notas.push_back(nota); // agregar una nota a la lista de notas
    }
    
    return notas;
}

double promedioNotas(const vector<double> &notas) {
    double promedio = 0;
    for(int i = 0; i < notas.size(); i++) {
        promedio = promedio + notas[i];
    }
    
    return promedio / notas.size();
}
int main() {
    
    vector<double> notas;
    
    notas = escribirNotas(notas);
    
    cout << "\nNotas registradas:" << endl;
    imprimirLista(notas);
    
    double promNotas = promedioNotas(notas);
    cout << "\nPromedio calculado: " << promNotas << endl;
    
    return 0;
    
}