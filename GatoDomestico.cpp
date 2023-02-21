#include <iostream>
#include "GatoDomestico.h"

GatoDomestico::GatoDomestico() : Anio(0),Dieta(""),LugarNac(""),Raza("")
{
    //ctor
}

GatoDomestico::GatoDomestico(GatoDomestico& G)
{
    Anio = G.Anio;
    Dieta = G.Dieta;
    LugarNac = G.LugarNac;
    Raza = G.Raza;
}

void GatoDomestico::setAnio(const int& G)
{
    Anio = G;
}

void GatoDomestico::setDieta(const std::string& G)
{
    Dieta = G;
}

void GatoDomestico::setLugarNac(const std::string& G)
{
    LugarNac = G;
}

void GatoDomestico::setRaza(const std::string& G)
{
    Raza = G;
}

int GatoDomestico::getAnio() const
{
  return Anio;
}

std::string GatoDomestico::getDieta() const
{
  return Dieta;
}

std::string GatoDomestico::getLugarNac() const
{
  return LugarNac;
}

std::string GatoDomestico::getRaza() const
{
  return Raza;
}
