#include "Problema_1.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Problema_1::vector() {

    int vector[1000];
    int tama�o;
    int datobuscado;

    cout << "Problema 1\n";
    cout << "Ingrese el tama�o de su arreglo \n";
    cin >> tama�o;
    vector[tama�o]; // Escoger tama�o usuario

    srand(time(NULL)); /// aleatorio
    int numale;
    numale = rand();
    cout << "Arreglo generado con existo\n";
    cout << "El Arreglo alealtorio es el sigueinte";
    for (int i = 0; i < tama�o + 1; i++)
    {
        numale = rand() & 100;
        vector[i] = numale;
        cout << " " << vector[i] << " , ";


    }

    cout << "\n";
    cout << "Presione ENTER, para generar numero aleatorio a buscar\n";
    int nrandom;
    nrandom = rand();
    nrandom = rand() & tama�o*2;

    cout << "N�mero a buscar  es de : " << nrandom<<"\n";

    datobuscado = nrandom;

    cout << "busquerda sencuencial\n";
    bool valida = false;
    int posicion=-1;
  

    for (int i = 0; i < tama�o; i++)
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