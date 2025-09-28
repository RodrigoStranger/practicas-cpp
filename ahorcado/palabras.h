#include "librerias.h"

#ifndef PALABRAS_H
#define PALABRAS_H

inline const vector<string> animales = {
    "gato", "perro", "elefante", "leon", "tigre"
};

inline const vector<string> sustantivos = {
    "mesa", "sol", "libro", "casa", "flor"
};

inline const vector<string> nombres = {
    "Ana", "Luis", "Carlos", "Maria", "Sofia"
};

inline const vector<vector<string>> todasLasCategorias = {
    animales, sustantivos, nombres
};

inline const vector<string> nombresCategorias = {
    "Animales", "Sustantivos", "Nombres"
};

#endif