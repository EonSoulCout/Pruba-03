#include "bibliografia.h"


Bibliografia::Bibliografia()
{

}

bool Bibliografia::agregarLibro(){
        int numAutores;
        string nombreAutor;
        string publicacion;
        string titulo;
        int numPaginas;

        cout<<"Ingrese el numero de autores: ";
        cin>>numAutores;
        cout<<"Ingrese la publicacion: ";
        getline(cin>>ws,publicacion);
        cout<<"Ingrese el titulo: ";
        getline(cin>>ws,titulo);
        cout<<"Ingrese el numero de paginas: ";
        cin>>numPaginas;


        Libro* lbr = new Libro(numAutores,publicacion,titulo);
        for (int i=0;i<numAutores;i++){
            cout<<"Ingrese el nombre del autor "<<i+1<<"/"<<numAutores<<": ";
            getline(cin>>ws,nombreAutor);
            lbr->agregarAutor(nombreAutor);
        }
        lbr->obtenerReferencia();
        referencias.push_back(lbr);
    return true;
}

bool Bibliografia::agregarArticulo()
{
    int numAutores;
    string nombreAutor;
    string publicacion;
    string revista;
    char journal;

    cout<<"Ingrese el numero de autores: ";
    cin>>numAutores;
    cout<<"Ingrese el nombre de la publicacion: ";
    getline(cin>>ws,publicacion);
    cout<<"Ingrese el nombre de la revista: ";
    getline(cin>>ws,revista);
    cout<<"Ingrese si se ha ingresando al journal (S/N): ";
    cin>>journal;


     Articulo* art = new Articulo(numAutores,publicacion,revista);

     if(journal=='s' || journal=='S'){
         art->setJournal(true);
     }else{
         art->setJournal(false);
     }

    for(int i=0;i<numAutores;i++){
        cout<<"Ingrese el nombre del autor "<<i+1<<"/"<<numAutores<<": ";
        getline(cin>>ws,nombreAutor);
        art->agregarAutor(nombreAutor);
    }
    art->obtenerReferencia();
    referencias.push_back(art);
    return true;
}

void Bibliografia::imprimirReferencias()
{
    int size=referencias.size();
    for(int i=0;i<size;i++){
        cout<<referencias[i]->obtenerReferencia();
    }
}
