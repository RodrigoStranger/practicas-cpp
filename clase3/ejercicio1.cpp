#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int numeroDeBasculas = 10;

int subieronPeso = 0;
int bajaronPeso = 0;
int personas = 1;

double promedioPesos(const vector<double> &pesos) {
    double promedio = 0;
    for(int i = 0; i < pesos.size(); i++) {
        promedio = promedio + pesos[i];
    }
    
    return promedio = promedio / pesos.size();
}

vector<double> EscribirPesos(vector<double> &pesos) {
    double peso = 0;
    cout << "Ingrese cada peso en cada bascula: " << endl;
    for(int i = 0; i < numeroDeBasculas; i++) {
        bool llave = true;
        while(llave) {
            cout << "Bascula " << i + 1 << ": ";
            cin >> peso;
            if(peso >= 0) {
                pesos.push_back(peso);
                llave = false;
            } else {
                cout << "Peso invalido: " << peso << ". Ingrese un nuevo peso" << endl;
            }
        }
    }
    return pesos;
}

void verificarSalud(double promedioAnteriorPeso, const vector<double> &pesos) {
    double promedioActualPeso = promedioPesos(pesos);
    double resultado = promedioActualPeso - promedioAnteriorPeso;
    if(resultado > 0) {
        subieronPeso++;
        cout << "\nPersona " << personas << " usted subio " << abs(resultado) <<  "kg de peso" << endl;
    } else if (resultado == 0 ) {
        cout << "\nUsted mantiene el mismo peso" << endl;
    } else {
        bajaronPeso++;
        cout << "\nPersona " << personas << " usted bajo " << abs(resultado) <<  "kg de peso" << endl;
    }
}

int main() {
    
    bool llave = true;
    
    while(llave) {
        cout << "Persona " << personas << ":" << endl;
        double promedioAnteriorPeso = 0;
        vector<double> pesos;
        while(true) {
            cout << "Digite su promedio anterior: ";
            cin >> promedioAnteriorPeso;
            if(promedioAnteriorPeso < 0) {
                cout << "Peso invalido: " << promedioAnteriorPeso << ". Ingrese un nuevo peso" << endl;
            } else {
                break;
            }
        }
        EscribirPesos(pesos);
        
        verificarSalud(promedioAnteriorPeso, pesos);
        
        string continuar;
        
        cout <<"\n¿Desea seguir evaluando pacientes?\n";
        cout << "si\n";
        cout << "no\n";
        cout << "Esperando respuesta: ";
        cin >> continuar;
        if(continuar == "no") {
            cout << endl;
            cout << "Informe: "<< endl;
            cout << "Personas subidas de peso: " << subieronPeso << endl;
            cout << "Personas bajaron de peso: " << bajaronPeso << endl;
            llave = false;
        } else {
            personas++;
            cout << endl;
        }
    }
    return 0;
}