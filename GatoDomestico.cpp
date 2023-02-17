#include "GatoDomestico.h"

GatoDomestico::GatoDomestico() : Dato(0)
{
    //ctor
}

GatoDomestico::GatoDomestico(GatoDomestico& G)
{
    Dato = G.Dato;
}

void GatoDomestico::setDato(const int& G)
{
    Dato = G;
}


int GatoDomestico::getDato() const
{
  return Dato;
}
