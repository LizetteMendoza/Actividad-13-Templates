#include<iostream>
#include"arreglo.h"
#include"computadora.h"

using namespace std;


int main(){

    ArregloDinamico<Computadora>computadoras;
    
    Computadora c1("Lenovo 3 R7","AMD Ryzen 7 ","Windows 10 pro",16);
    Computadora c2("Dell Gaming G5", "AMD Ryzen 5","Windows 10",8);
    Computadora c3("ASUS ROG Strix G", "i Core i5-9","Windows 10 Pro",12);
    Computadora c4("Lenovo ThinkPad L15", "i Core i5-10","Windows 10 Pro",8);
    Computadora c5("Acer Nitro 5","i Core i5-9300H","Windows 10",8);

    computadoras<<c1<<c2<<c2<<c2<<c3<<c4<<c5;

    Computadora c6("Dell Gaming G5", "AMD Ryzen 5","Windows 10",8);

    ArregloDinamico<Computadora*> ptrs= computadoras.buscar_todos(c6);

    if(ptrs.size()>0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c =ptrs[i];
            cout<<*c<<endl;
        }
    }
    else{
        cout<<"No exixten coincidencias"<<endl;
    }

    /*Computadora *ptr= computadoras.buscar(c6);
    if(ptr!=nullptr){
        cout<<endl<<*ptr<<endl;
    }
    else{
        cout<<endl<<"No existe"<<endl;
    }*/
    
    /*ArregloDinamico<string> arreglo;

    arreglo.insertar_final("Memoria dinamica");
    arreglo.insertar_final("Templates");
    arreglo.insertar_inicio("Sobre carga de operadores");
    arreglo.insertar_inicio("Lecura de archivos");

    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" | ";
    }

    arreglo.insertar("Prueba del metodo insertar",2);

    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" | ";
    }

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    
    

    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" | ";
    }

    cout<<endl<<endl;
    string *v = arreglo.buscar("Memoria dinamica");
    cout<<v<<" "<<*v<<endl;
    *v = "Busqueda lineal";
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" | ";
    }*/
    
    return 0;
}