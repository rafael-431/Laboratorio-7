#include "Problema_1.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Problema_1::vector() {

    int vector[1000];
    int tamaño;
    int datobuscado;

    cout << "Problema 1\n";
    cout << "Ingrese el tamaño de su arreglo \n";
    cin >> tamaño;
    vector[tamaño]; // Escoger tamaño usuario

    srand(time(NULL)); /// aleatorio
    int numale;
    numale = rand();
    cout << "Arreglo generado con existo\n";
    cout << "El Arreglo alealtorio es el sigueinte";
    for (int i = 0; i < tamaño + 1; i++)
    {
        numale = rand() & 100;
        vector[i] = numale;
        cout << " " << vector[i] << " , ";


    }

    cout << "\n";
    cout << "Presione ENTER, para generar numero aleatorio a buscar\n";
    int nrandom;
    nrandom = rand();
    nrandom = rand() & tamaño*2;

    cout << "Número a buscar  es de : " << nrandom<<"\n";

    datobuscado = nrandom;

    cout << "busquerda sencuencial\n";
    bool valida = false;
    int posicion=-1;
  

    for (int i = 0; i < tamaño; i++)
    {
        if (vector[i] == datobuscado)
        {
            posicion=i+1;
        }
    }

    if (posicion>-1)
    {
        cout << "El numero aleatorio " << datobuscado<<"se encuentra en la posicion"<< posicion<<"\n";
    }
    else
    {
        cout << "El numero aleatorio " << datobuscado << "No existe en el arreglo acual"  << "\n";

    }
}

Problema_1::Problema_1() {

}