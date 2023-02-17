#ifndef LISTA_H
#define LISTA_H
#include"GatoDomestico.h"
#define TAM 50

class Lista
{
    private:
        GatoDomestico datos[TAM];
        int ultimo;

    public:
        Lista();
        bool Vacia();
        bool Llena();
        bool Agrega(GatoDomestico);
        void Buscar(int);
        bool Insertar(GatoDomestico,int);
        void Imprimir();
        void Eliminar(int pos);

};

#endif // LISTA_H
