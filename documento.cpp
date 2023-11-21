#include "documento.h"

const vector<string> &Documento::getAutores() const
{
    return autores;
}

Documento::Documento()
{

}

Documento::Documento(int numAutores): numAutores(numAutores)
{

}

bool Documento::agregarAutor(string nombre)
{
    autores.push_back(nombre);
    return true;
}

string Documento::obtenerReferencia()
{
    string str = "";
    for(string s: autores){
        str += s + "|\n ";
    }
    cout<<endl;
    return str;
}
