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

    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &c);

    friend Laboratorio& operator<<(Laboratorio &L, const Computadora &c)
    {
        L.agregarFinal(c);
        return L;
    }
};


#endif