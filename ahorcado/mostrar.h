#include "librerias.h"

#ifndef MOSTRAR_H
#define MOSTRAR_H

inline void mostrarCategoria(const string& categoria) {
    cout << "La Categoría escogida es: " << categoria << endl;
}

inline void mostrarProgreso(const string& palabra, const vector<char>& letrasAdivinadas) {
  cout << "Progreso: ";
  for (int i = 0; i < palabra.size(); i++) {
    char c = palabra[i];
    bool encontrada = false;
    for (int j = 0; j < letrasAdivinadas.size(); j++) {
      if (letrasAdivinadas[j] == c) {
        encontrada = true;
        break;
      }
    }
    if (encontrada) {
      cout << c << " ";
    } else {
      cout << "_ ";
    }
  }
  cout << endl << endl;
}


inline void mostrarLetrasIncorrectas(const vector<char>& letrasIncorrectas) {
  cout << "Letras incorrectas: ";
  cout << "[";
  for (int i = 0; i < letrasIncorrectas.size(); i++) {
    cout << letrasIncorrectas[i];
    if (i < letrasIncorrectas.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl << endl;
}

inline void mostrarResultadoFinal(bool victoria, const string& palabra, int intentos, int maxIntentos, const vector<char>& letrasIncorrectas) {
  if (victoria) {
    cout << "¡Felicidades! Has adivinado la palabra: " << palabra << endl;
  } else {
    cout << "Has perdido. La palabra era: " << palabra << endl;
  }
  cout << "Intentos usados: " << intentos << "/" << maxIntentos << endl;
  cout << "Letras equivocadas: ";
  mostrarLetrasIncorrectas(letrasIncorrectas);
}


inline void mostrarAhorcado(int intentos) {
    static const vector<vector<string>> etapas = {
        {
          "+--------------------+",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|                    |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |          O     |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |          O     |",
          "|   |          |     |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |          O     |",
          "|   |         /|     |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |          O     |",
          "|   |         /|\\    |",
          "|   |                |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |          O     |",
          "|   |         /|\\    |",
          "|   |         /      |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        },
        {
          "+--------------------+",
          "|   +----------+     |",
          "|   |          |     |",
          "|   |          O     |",
          "|   |         /|\\    |",
          "|   |         / \\    |",
          "|   |                |",
          "|   |                |",
          "|   ============     |",
          "+--------------------+"
        }
    };

    if (intentos < 0) intentos = 0;
    if (intentos >= (int)etapas.size()) intentos = etapas.size() - 1;

    for (int i = 0; i < (int)etapas[intentos].size(); i++) {
        cout << etapas[intentos][i] << endl;
    }
    cout << endl;
}

#endif