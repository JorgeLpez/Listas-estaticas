#include<iostream>
#include "Lista.h"

Lista::Lista()
{
    ultimo=-1;
}

bool Lista::Vacia()
{
    return ultimo==-1;
}

bool Lista::Llena()
{
    return ultimo==TAM-1;
}

bool Lista::Agrega(GatoDomestico dato)
{
    if(!Llena()){
        datos[ultimo+1]=dato;
        ultimo++;
        return true;
    }else{
        std::cout<<"\nError!, La lista esta llena."<<std::endl;
    }
}

void Lista::Buscar(std::string elemento)
{
    if(!Vacia()){
        int i=0;
        char band='F';

        while(i<ultimo+1 && band=='F'){
            if(datos[i].getRaza()==elemento){
                band='T';
            }
            i++;
        }
        if(band=='T'){
            std::cout<<"\nEl elemento "<<elemento<<" esta en la posisicion "<<i<<" de la lista."<<std::endl<<std::endl;
        }
        else if(band=='F'){
            std::cout<<"\nEl elemento "<<elemento<<" no se ecuentra en la lista."<<std::endl<<std::endl;
        }
    }
    else{
        std::cout<<"\nLa lista esta vacia!"<<std::endl<<std::endl;
    }
}

void Lista::Eliminar(int pos)
{
    if(!Vacia() && pos<=ultimo && pos>=0)
    {
        for(int i=pos;i<=ultimo;i++){
            datos[pos]=datos[pos+1];
            pos++;
        }
        ultimo--;
        std::cout<<"\nElemento eliminado exitosamente!"<<std::endl<<std::endl;
    }
    else if(Vacia()){
        std::cout<<"\nLa lista esta vacia!"<<std::endl<<std::endl;
    }
    else if(pos>ultimo || pos<0){
        std::cout<<"\nError! No hay elementos en esa posicion."<<std::endl<<std::endl;
    }
}

bool Lista::Insertar(GatoDomestico dato,int pos)
{
    if(Vacia() && pos==0){
        datos[pos]=dato;
        ultimo++;
        return true;
    }else if(!Llena() && pos==0){
        for(int i=ultimo;i>=0;i--){
            datos[i+1]=datos[i];
        }
        ultimo++;
        datos[pos]=dato;
        return true;
    }
    else if(!Llena() && pos!=0 && pos<=ultimo){
        for(int i=ultimo;i>=pos;i--){
            datos[i+1]=datos[i];
        }
        ultimo++;
        datos[pos]=dato;
        return true;
    }
    else if(!Llena() && pos==ultimo+1){
        datos[pos]=dato;
        ultimo++;
        return true;
    }
    else if(Llena()){
        std::cout<<"\nError!, La lista esta llena."<<std::endl<<std::endl;
        return false;
    }
    else{
        std::cout<<"\nPosicion no valida!"<<std::endl<<std::endl;
        return false;
    }
}

void Lista::Imprimir()
{
    if(!Vacia()){
        std::cout<<"\n\tImprimiendo todos los elementos de la lista: "<<std::endl<<std::endl;
        for(int i=0;i<=ultimo;i++){
            std::cout<<"["<<datos[i].getAnio()<<", ";
            std::cout<<datos[i].getDieta()<<", ";
            std::cout<<datos[i].getLugarNac()<<", ";
            std::cout<<datos[i].getRaza()<<"]"<<"->";
        }
        std::cout<<"\n";
    }else{
        std::cout<<"\nLa lista esta vacia!"<<std::endl<<std::endl;
    }
}
