#ifndef LIBRO_H
#define LIBRO_H

#include "documento.h"
#include <iostream>

using namespace std;

class Libro : public Documento
{
private:
    string titulo;
    int paginas;
public:
    Libro();
    Libro(int numAutores, string publicacion, string titulo);
    int getPaginas() const;
    void setPaginas(int newPaginas);
    string obtenerReferencia();
};

#endif // LIBRO_H
