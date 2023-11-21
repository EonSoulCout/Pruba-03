#include <iostream>
#include "libro.h"
#include "articulo.h"
#include "bibliografia.h"

using namespace std;

int main()
{
    int op;
    Bibliografia b;

    do{
        cout<<"1.- Agregar un Libro"<<endl;
        cout<<"2.- Agregar un Articulo"<<endl;
        cout<<"3.- Imprimir Referencias"<<endl;
        cout<<"4.- Salir"<<endl;
        cout<<"Ingrese la opcion: ";
        cin>>op;
        switch(op){
        case 1:
            b.agregarLibro();
            system("cls");
            break;
        case 2:
            b.agregarArticulo();
            system("cls");
            break;
        case 3:
            b.imprimirReferencias();
            system("cls");
            break;
        case 4:
            cout<<"\t\t\tFin del programa\n";
            break;
        default:
            cout<<"\t\t\tError!\n";
            break;
        }
    }while(op!=4);



    return 0;
}
