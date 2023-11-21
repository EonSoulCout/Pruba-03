#ifndef ARTICULO_H
#define ARTICULO_H

#include "documento.h"
#include <iostream>

using namespace std;

class Articulo : public Documento
{
private:
    bool journal;
    string revista;
public:
    Articulo();
    Articulo(int numAutores, string publicacion, string revista);

    bool getJournal() const;
    void setJournal(bool newJournal);

    string obtenerReferencia();
};

#endif // ARTICULO_H
