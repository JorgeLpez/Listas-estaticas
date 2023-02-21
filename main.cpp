#include <iostream>
#include"Lista.h"
#include"GatoDomestico.h"

using namespace std;

int main()
{
    int opc,anio,pos,elem;
    string dieta,lugarnac,raza;
    GatoDomestico Mycat;
    Lista Mylist;

    do{
        system("cls");
        cout<<"\n\t**MENU DE OPCIONES**"<<endl<<endl;
        cout<<"  1. Agrega."<<endl;
        cout<<"  2. Busca."<<endl;
        cout<<"  3. Elimina."<<endl;
        cout<<"  4. Inserta."<<endl;
        cout<<"  5. Muestra."<<endl;
        cout<<"  6. Salir."<<endl<<endl;
        cout<<"Elige una opcion: ";
        cin>>opc;

        switch (opc){

            case 1: system("cls");
                    cout<<"\n\tIngresa el anio de nacimiento del gato domestico: ";
                    cin>>anio;
                    Mycat.setAnio(anio);
                    cout<<"\n\tIngresa la dieta del gato domestico: ";
                    cin>>dieta;
                    Mycat.setDieta(dieta);
                    cout<<"\n\tIngresa el lugar de nacimiento del gato domestico: ";
                    cin>>lugarnac;
                    Mycat.setLugarNac(lugarnac);
                    cout<<"\n\tIngresa la raza del gato domestico: ";
                    cin>>raza;
                    Mycat.setRaza(raza);
                    if(Mylist.Agrega(Mycat)==true){
                        cout<<"\nDato agregado exitosamente!"<<endl<<endl;
                    }
                    system("pause");
                    break;

            case 2: system("cls");
                    cout<<"\n\tIngresa la raza del gato que deseas buscar: ";
                    cin>>raza;
                    Mylist.Buscar(raza);
                    system("pause");
                    break;

            case 3: system("cls");
                    cout<<"\n\tIngresa la posicion del gato que deseas eliminar: ";
                    cin>>pos;
                    Mylist.Eliminar(pos);
                    system("pause");
                    break;

            case 4: system("cls");
                    cout<<"\n\tIngresa el anio de nacimiento del gato domestico: ";
                    cin>>anio;
                    Mycat.setAnio(anio);
                    cout<<"\n\tIngresa la dieta del gato domestico: ";
                    cin>>dieta;
                    Mycat.setDieta(dieta);
                    cout<<"\n\tIngresa el lugar de nacimiento del gato domestico: ";
                    cin>>lugarnac;
                    Mycat.setLugarNac(lugarnac);
                    cout<<"\n\tIngresa la raza del gato domestico: ";
                    cin>>raza;
                    Mycat.setRaza(raza);
                    cout<<"\n\tIngresa la posicion en la que deseas insertar: ";
                    cin>>pos;
                    if(Mylist.Insertar(Mycat,pos)==true){
                        cout<<"\nDato agregado exitosamente!"<<endl<<endl;
                    }
                    system("pause");
                    break;

            case 5: system("cls");
                    Mylist.Imprimir();
                    system("pause");
                    break;
        }
    }while(opc!=6);
}
