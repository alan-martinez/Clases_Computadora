#include <iostream>
#include "Laboratorio.h"
using namespace std;

int main ()
{
    Computadora c01 = Computadora("Windows", "8 ram", "Klen", "1 Tb");
    Computadora c02; // = Personaje();

    c02.setSistema("Mac");
    c02.setRam("6 ram");
    c02.setNombre("Alan");
    c02.setRom("500 gb");

    Laboratorio lc;
    lc.agregarComputadora(c01);
    lc.agregarComputadora(c02);

    lc.mostrar();

    //cout << "El sistema operativo es: " << c01.getSistema() << endl;
    //cout << "Contiene "<< c01.getRam()<< endl;
    //cout << "El nombre es: " << c01.getNombre() << endl;
    //cout << "Con: " << c01.getRom() << " de almacenamiento "<< endl;
    return 0;
}