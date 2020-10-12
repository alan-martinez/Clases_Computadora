#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c )
{
    if (cont < 5){
        arreglo [cont] = c;
        cont ++;
    }
    else {
        cout << "El arreglo esta lleno! "<< endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i=0; i< cont; i++){
        Computadora &p = arreglo [i];
        cout << "Sistema: "<< p.getSistema() << endl; 
        cout << "Ram: "<< p.getRam() << endl; 
        cout << "Nombre: "<< p.getNombre() << endl; 
        cout << "Rom: "<< p.getRom() << endl; 
        cout << endl;
    }
}