#include "articulo.h"

bool Articulo::getJournal() const
{
    return journal;
}

void Articulo::setJournal(bool newJournal)
{
    journal = newJournal;
}

string Articulo::obtenerReferencia()
{
    return Documento::obtenerReferencia() +
            revista + ", " +
            this->publicacion + ", En Journal: " +
            (this->journal ? "Si" : "No");
}

Articulo::Articulo()
{

}

Articulo::Articulo(int numAutores, string publicacion, string revista):
    Documento(numAutores), revista(revista)
{
    this->publicacion = publicacion;
}
