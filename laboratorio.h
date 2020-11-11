#ifndef LABORATIORIO_H
#define LABORATIORIO_H
#include "computadora.h"
#include<vector>

class Laboratorio
{
    vector<Computadora> computadoras;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &L, const Computadora &c)
    {
        L.agregarFinal(c);
        return L;
    }
};


#endif