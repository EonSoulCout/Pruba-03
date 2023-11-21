#ifndef BIBLIOGRAFIA_H
#define BIBLIOGRAFIA_H
#include "documento.h"
#include "libro.h"
#include "articulo.h"
#include <iostream>

using namespace std;

class Bibliografia
{
private:
    vector<Documento*> referencias;
public:
    Bibliografia();
    bool agregarLibro();
    bool agregarArticulo();
    void imprimirReferencias();
};

#endif // BIBLIOGRAFIA_H

