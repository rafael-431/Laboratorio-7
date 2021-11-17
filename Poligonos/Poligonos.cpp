// Poligonos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include"Problema_1.h"
#include <time.h>
using namespace std;


class Poligono{
private:
    int ID=0;
    int lados; 
    int MedLad;
    int MedBas;
    int MedAl;
    int apo;
   double area;
   int perimetro;
    string color;
public:
    Poligono( int, int,int,int,int,int, double,int, string);
    void Area();
    void Perimetro();
    void Mostrar();



};

\

//constructor
Poligono::Poligono( int _ID, int _lados,int _MedLad, int _MedBas, int _MedAl,int _apo, double _area,int _perimetro, string _color) {
   
    ID = _ID;
    lados = _lados;
    MedLad = _MedLad;
    MedBas = _MedBas;
    MedAl = _MedAl;
    apo = _apo;
    color = _color;
    area = _area;
    perimetro = _perimetro;
   

}



//Area
void Poligono::Area() {
   
    if (lados == 3) {
        area = (MedAl*MedBas)/2;
    }
    else if (lados ==4) {
        area = (MedAl * MedBas);
    }
    else if (lados > 4) {
        area = ((MedLad * lados) * apo) / 2;
    }
    else {
        cout << "Error\n";
    }
    cout << "Area: " << area << endl;
    

}



void Poligono::Perimetro() {
    if (lados == 3) {
        perimetro = (MedLad * 2) + MedBas;
    }
    else if(lados == 4) {
        perimetro = (MedAl*2) + (MedBas*2);
    }
    else {
        perimetro = MedLad * lados;
    }
    cout << "Perimetro: " << perimetro << endl;
    cout << "Color " << color << endl;


}

void Poligono::Mostrar() {
    Area();
    Perimetro();
    


}


int main()
{
    Problema_1 busqueda;

    busqueda.vector();


    cout << "\n";
    cout << "problema 2\n";
    int op,cont=0,lad,ap,base, h,ml;
    do {
      
        cout << "Cuantos lados hay: " << endl;
        cin >> lad;
        if (lad == 3) {
            cout << "Cuanto mide la base: " << endl;
            cin >> base;
            cout << "Cuantos mide la altura: " << endl;
            cin >> h;
            cout << "Cuantos mide los lados: " << endl;
            cin >> ml;
            Poligono poli(cont, lad, ml, base, h, 1, 02, 3, "Amarillo");
            poli.Mostrar();
        }
        else if (lad == 4) {
            cout << "Cuanto mide la base: " << endl;
            cin >> base;
            cout << "Cuantos mide la altura: " << endl;
            cin >> h;       
            Poligono poli(cont, lad, 0, base, h, 0, 0, 0, "Rojo");
            poli.Mostrar();
        }  
        else if (lad > 4) {
            cout << "Cuantos mide los lados: " << endl;
            cin >> ml;
            cout << "Cuantos mide el apotema: " << endl;
            cin >> ap;
            Poligono poli(cont, lad, ml, 0, 0,ap, 0, 0, "Azul");
            poli.Mostrar();
        }
        if (lad == 3) {
            cout << "Triangulo, tiene: " << lad << " lados\n";
        }
        else if (lad == 4) {
            cout << "Cuadrilatero, tiene: " << lad << " lados\n";

        }
        else if (lad > 4) {
            cout << "Poligo, tiene: " << lad<< " lados\n";

        }
        else
        {
            cout << "figura con lado insuficiente\n";
        }
        cont++;
        cout << "Desea otra figura?  " << endl;
        cout << "ingrese 1 si asi lo desea y 2 sino desea agregar otra figura" << endl;
        cin >> op;
    } while (op == 1);
    system("pause");
    return 0;
    
}


