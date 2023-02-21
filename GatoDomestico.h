#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H
#include <iostream>

class GatoDomestico
{
    private:
        int Anio;
        std::string Dieta,LugarNac,Raza;

    public:
        GatoDomestico();
        GatoDomestico(GatoDomestico&);
        int getAnio() const;
        std::string getDieta() const;
        std::string getLugarNac() const;
        std::string getRaza() const;

        void setAnio(const int&);
        void setDieta(const std::string&);
        void setLugarNac(const std::string&);
        void setRaza(const std::string&);
};

#endif // GATODOMESTICO_H
