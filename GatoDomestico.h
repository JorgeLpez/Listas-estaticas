#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H
#include <iostream>

class GatoDomestico
{
    private:
        int Dato;

    public:
        GatoDomestico();
        GatoDomestico(GatoDomestico&);
        int getDato() const;
        void setDato(const int&);
};

#endif // GATODOMESTICO_H
