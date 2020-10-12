#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
    string sistema;
    string ram;
    string nombre;
    string rom;
public: 
    Computadora();
    Computadora(const string &sistema, const string &ram, const string &nombre, const string &rom);
    void setSistema(const string &v);
    string getSistema();
    void setRam(const string &v);
    string getRam();
    void setNombre(const string &v);
    string getNombre();
    void setRom(const string &v);
    string getRom();
};

#endif